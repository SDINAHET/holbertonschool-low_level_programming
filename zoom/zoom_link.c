#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_zoom_link(const char *meeting_id, const char *password) {
char zoom_url[256];

/*Format the Zoom URL*/
	snprintf(zoom_url, sizeof(zoom_url), "https://holberton-fr.zoom.us/j/%s?pwd=%s", meeting_id, password);

// Print the Zoom URL
printf("Zoom meeting URL: %s\n", zoom_url);
}

int main(void) {
// Replace with actual meeting ID and password
const char *meeting_id = "3341205430";
const char *password = "HolbC#12x5";

// Create the Zoom meeting link
create_zoom_link(meeting_id, password);

return 0;
}
