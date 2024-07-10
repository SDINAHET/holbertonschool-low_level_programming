#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stddef.h>

/* Constantes */
const char BASE64_CHARS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

/* Prototypes de fonctions */
int is_base64(unsigned char c);
char *base64_decode(const char *encoded_string, size_t *decoded_length);

/**
* is_base64 - Vérifie si un caractère est valide en encodage Base64.
* @c: Le caractère à vérifier.
*
* Retourne: 1 si valide, 0 sinon.
*/
int is_base64(unsigned char c)
{
	return (isalnum(c) || (c == '+') || (c == '/'));
}

/**
* base64_decode - Décode une chaîne encodée en Base64.
* @encoded_string: La chaîne encodée.
* @decoded_length: Pointeur pour stocker la longueur de la chaîne décodée.
*
* Retourne: Pointeur vers la chaîne décodée, ou NULL en cas d'échec.
*/
char *base64_decode(const char *encoded_string, size_t *decoded_length)
{
	int in_len = strlen(encoded_string);
	int i = 0, j = 0, in = 0;
	int decoded_buffer_len = in_len * 3 / 4;
	char *decoded_string = malloc(decoded_buffer_len + 1);
	if (decoded_string == NULL)
		return (NULL);

	unsigned char char_array_4[4], char_array_3[3];
	while (in_len-- && (encoded_string[in] != '=') && is_base64(encoded_string[in])) {
		char_array_4[i++] = encoded_string[in++];
		if (i == 4) {
			for (i = 0; i < 4; i++)
				char_array_4[i] = strchr(BASE64_CHARS, char_array_4[i]) - BASE64_CHARS;

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
			char_array_4[k] = strchr(BASE64_CHARS, char_array_4[k]) - BASE64_CHARS;

		char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
		char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
		char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

		for (int k = 0; (k < i - 1); k++)
			decoded_string[j++] = char_array_3[k];
	}

	decoded_string[j] = '\0';
	*decoded_length = j;
	return (decoded_string);
}

/**
* main - Lit une chaîne encodée en Base64 depuis la console et la décode.
*
* Retourne: 0 en cas de succès, 1 en cas d'erreur.
*/
int main(void)
{
	char encoded_password[256];
	size_t decoded_length;
	char *decoded_password;

	printf("Enter the Base64 encoded password from Zoom link: ");
	if (fgets(encoded_password, sizeof(encoded_password), stdin) == NULL) {
		fprintf(stderr, "Error reading input.\n");
		return (1);
	}

	/* Supprime le caractère de nouvelle ligne si présent */
	encoded_password[strcspn(encoded_password, "\n")] = '\0';

	decoded_password = base64_decode(encoded_password, &decoded_length);

	if (decoded_password) {
		printf("Decoded password: %s\n", decoded_password);
		free(decoded_password);
	} else {
		printf("Failed to decode password.\n");
	}

	return (0);
}
