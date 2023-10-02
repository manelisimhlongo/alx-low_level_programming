#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * display_error - function that displays errors
 * @message: error message to display
 * Return: Nothing
 */
void display_error(const char *message)
{
	write(STDERR_FILENO, "Error: ", 7);
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, "\n", 1);
	exit(98);
	exit(98);
}

/**
 * display_elfheader - function that displays elf header
 * @header: header to display
 * Return: Nothing
 */
void display_elfheader(const Elf64_Ehdr *header)
{
	int i = 0;

	printf("Magic: ");
	while (i < EI_NIDENT)
	{
		printf("%02x ", header->e_ident[i]);
		i++;
	}
	printf("\n");

	printf("Class: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			(header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown"));

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX System V ABI"); break;
		case ELFOSABI_HPUX: printf("HP-UX ABI"); break;
		case ELFOSABI_NETBSD: printf("NetBSD ABI"); break;
		case ELFOSABI_LINUX: printf("Linux ABI"); break;
		case ELFOSABI_SOLARIS: printf("Solaris ABI"); break;
		case ELFOSABI_AIX: printf("AIX ABI"); break;
		case ELFOSABI_IRIX: printf("IRIX ABI"); break;
		case ELFOSABI_FREEBSD: printf("FreeBSD ABI"); break;
		case ELFOSABI_TRU64: printf("Tru64 UNIX ABI"); break;
		case ELFOSABI_MODESTO: printf("Novell Modesto ABI"); break;
		case ELFOSABI_OPENBSD: printf("OpenBSD ABI"); break;
		case ELFOSABI_ARM: printf("ARM architecture ABI"); break;
		case ELFOSABI_STANDALONE: printf("Standalone (embedded) ABI"); break;
		default: printf("Unknown"); break;
	}
	printf("\n");

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (header->e_type)
	{
		case ET_NONE: printf("None"); break;
		case ET_REL: printf("Relocatable"); break;
		case ET_EXEC: printf("Executable"); break;
		case ET_DYN: printf("Shared object"); break;
		case ET_CORE: printf("Core"); break;
		default: printf("Unknown"); break;
	}
	printf("\n");

	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read = read(fd, &header, sizeof(header));

	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	if (fd == -1)
		display_error(strerror(errno));

	if (bytes_read == -1)
		display_error(strerror(errno));

	if (bytes_read != sizeof(header) ||
			memcmp(header.e_ident, ELFMAG, SELFMAG) != 0 ||
			header.e_ident[EI_VERSION] != EV_CURRENT ||
			(header.e_ident[EI_CLASS] != ELFCLASS32 && header.e_ident[EI_CLASS] != ELFCLASS64))
	{
		display_error("Not a valid ELF file");
	}

	display_elfheader(&header);

	close(fd);
	return (0);
}
