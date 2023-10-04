#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd;
    
    char filename[] = "myfile2.txt";
    int sum = 42;  // Replace this with your actual sum value

    // Open file
    fd = open(filename, O_WRONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Write to file
    dprintf(fd, "Your CPP Quiz Score is :%d\n", sum);

    // Close file
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }

    printf("You Have Earned Total %d Coin :\n", sum);

    return 0;
}
