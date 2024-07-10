include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>

const char base64_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

/**
* is_base64 - checks if a character is valid in Base64 encoding.
* @c: the character to check.
*
* Return: 1 if valid, 0 otherwise.
*/
int is_base64(unsigned char c)
{
	return (isalnum(c) || (c == '+') || (c == '/'));
}

/**
* base64_decode - decodes a Base64 encoded string.
* @encoded_string: the encoded string.
* @decoded_length: pointer to store the length of the decoded string.
*
* Return: pointer to the decoded string, or NULL on failure.
*/
char *base64_decode(const char *encoded_string, size_t *decoded_length)
{
	int in_len = strlen(encoded_string);
	int i = 0, j = 0, in = 0;
	int decoded_buffer_len = in_len * 3 / 4;
	char *decoded_string = malloc(decoded_buffer_len + 1);
	if (decoded_string == NULL)
		return (NULL);

	uint8_t char_array_4[4], char_array_3[3];
	while (in_len-- && (encoded_string[in] != '=') && is_base64(encoded_string[in])) {
		char_array_4[i++] = encoded_string[in++];
		if (i == 4) {
			for (i = 0; i < 4; i++)
				char_array_4[i] = strchr(base64_chars, char_array_4[i]) - base64_chars;

			char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
			char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
			char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

			for (i = 0; (i < 3); i++)
				decoded_string[j++] = char_array_3[i];
			i = 0;
		}
	}

	if (i) {
		for (int k = i; k < 4; k++)
			char_array_4[k] = 0;

		for (int k = 0; k < 4; k++)
			char_array_4[k] = strchr(base64_chars, char_array_4[k]) - base64_chars;

		char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
		char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
		char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

		for (int k = 0; (k < i - 1); k++)
			decoded_string[j++] = char_array_3[k];
	}

	decoded_string[j] = '\0';
	*decoded_length = j;
	return decoded_string;
}

int main() {
	char encoded_password[256];
	printf("Enter the Base64 encoded string: ");
	if (fgets(encoded_password, sizeof(encoded_password), stdin) == NULL) {
		fprintf(stderr, "Error reading input.\n");
	return (1);
	}

	/*Remove the newline character if present*/
	encoded_password[strcspn(encoded_password, "\n")] = '\0';

	size_t decoded_length;
	char *decoded_password = base64_decode(encoded_password, &decoded_length);

	if (decoded_password) {
		printf("Decoded password: %s\n", decoded_password);
		free(decoded_password);
	} else {
		printf("Failed to decode password.\n");
	}

	return (0);
}
