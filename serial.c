#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

/*
 *  * 'open_port()' - Open serial port 1.
 *   *
 *    * Returns the file descriptor on success or -1 on error.
 *     */

int
open_port(void)
{
	 int fd; /* File descriptor for the port */


	    fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY | O_NDELAY);
	      if (fd == -1)
		        {
				   /*
				    *     * Could not open the port.
				    *         */

				    perror("open_port: Unable to open /dev/ttyf1 - ");
				      }
	        else
			    fcntl(fd, F_SETFL, 0);

		  return (fd);
}

int main(int n, char** args) {
	int f = open_port();
	//char array[] = "999999999999999999999";
	long i = 0;
	char* output = args[1];
	//output = 'b';
	while(i < 3) { 
	  write(f, output, 4); 
	  i++;
	}
	return 0;
}

