//TOWER HANOI PROBLEM...
// Disk 1 moved from A to C

//	      (from rod)    (Aux rod)	  (To rod)						
//		Rod A         Rod B        Rod C
//		   |		|	    |
//	   	   |		|   	    |
//  disk 1 	  (|)		|	    |
//  disk 2 	 ((|))		|	    |
//  disk 3	(((|)))		|	    |
//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Disk 2 moved from A to B
//
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//  		   |            |           |
//  disk 2       ((|))          |           |
//  disk 3      (((|)))         |          (|)
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Disk 1 moved from C to B
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//                 |            |           |
//  	           |            |           |
//  disk 3      (((|)))       ((|))        (|)
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Disk 3 moved from A to C
//
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//                 |            |           |
//  	           |           (|)          |
//  disk 3      (((|)))       ((|))         |
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Disk 1 moved from B to A
//
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//                 |            |           |
//  	           |           (|)          |
//                 |          ((|))      (((|)))
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  Disk 2 moved from B to C
//
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//                 |            |           |
//                 |           	|           |
//                (|)         ((|))      (((|)))
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  Disk 1 moved from A to C
//
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//                 |            |           |
//                 |            |         ((|))
//                (|)         	|        (((|)))
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  done
//            (from rod)    (Aux rod)     (To rod)
//              Rod A         Rod B        Rod C
//                 |            |           |
//                 |            |           |
//                 |            |          (|)
//                 |            |         ((|))
//                 |            |        (((|)))
//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#include<stdio.h>

void towerOfHanoi(int,char,char,char);

int main() {
	
	int disks = 0;

	printf("Enter Number of Disks\n");
	scanf("%d",&disks);

	towerOfHanoi(disks,'A','C','B');	//number of disk, start rod finish rod , temp rod
}
//____________________________________1st solution________________________________________//
//
///
/*
void towerOfHanoi(int n, char from_rod,char to_rod,char temp_rod){
	
	if(n>0){
	
		towerOfHanoi(n-1,from_rod,temp_rod,to_rod);
		printf("Disk %d moved from %c to %c \n ",n,from_rod,to_rod);
		towerOfHanoi(n-1,temp_rod,to_rod,from_rod);
	}

}

//_________________________________________________________________________________________//
*/

void towerOfHanoi(int n,char from_rod,char to_rod,char temp_rod){

	if(n==1){
	
		printf("Disk %d moved from %c to %c \n ",n,from_rod,to_rod);
		return;
		
	}
	towerOfHanoi(n-1,from_rod,temp_rod,to_rod);
	printf("Disk %d moved from %c to %c \n ",n,from_rod,to_rod);
	towerOfHanoi(n-1,temp_rod,to_rod,from_rod);

}




