#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


using namespace std;

struct memory
{
	int a;
	int b;
};

int main(int argc, char *argv[])
{
	cout << "inainte de fork\n";
	
	int a = 0;
	int pipefd[2];
	int err;

	err = pipe(pipefd);
	if(err < 0)
	{
		fprintf(stderr, "Error\n");
		return(-1);
	}
	
	int pid = fork();

	if (pid > 0) {
		while (true) {
			a ++;
			write(pipefd[1], &a, sizeof(a)); 
		}
	} else {
		while (true) {
			read(pipefd[0], &a, sizeof(a));
			cout << a << "\n";
		}
	}

	return 0;
}