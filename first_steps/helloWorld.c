#include <stdio.h>
#include <mpi.h>


int main(int argc, char *argv[]){
		
	int rank;
        MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	printf("First \n");
	
	MPI_Init(&argc, &argv);

//	int num_processes;
//	MPI_Comm_size(MPI_COMM_WORLD, &num_processes);
		

//Get the processor that's actual executing	

	printf("%d", rank);
	printf("Inside \n");

	MPI_Finalize();

	printf("Last \n");

	return 0;



}
