#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

#define EI_NIDENT 16

typedef struct {
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;
/**
 *print_elf_header - This is the entry point of the code
 *@Elf64_Ehdr *header: lkjdgmf
 *Return:0 Success
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ELF%d\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("  Data:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" : "unknown");
	printf("  Version:                           %u (current)\n", header->e_version);
	printf("  OS/ABI:                            %u\n", header->e_ident[7]);
	printf("  ABI Version:                       %u\n", header->e_ident[8]);
	printf("  Type:                              %u\n", header->e_type);
	printf("  Entry point address:               %#lx\n", header->e_entry);
}
/**
 *main - This is the entry point of the code
 *@argc: lkmg
 *@argv: klfglk
 *Return:0 Success
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
        int fd = open(filename, O_RDONLY);
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	if (fd == -1)
	{
		perror("open");
		return (98);
	}

	Elf64_Ehdr header;
	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Unable to read ELF header\n");
		close(fd);
		return (98);
	}

	close(fd);

	if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		return (98);
	}
	print_elf_header(&header);

	return (0);
}
