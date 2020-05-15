//Array:

//Collection of Homogenus Element
//Linear DataStructure
//Memory In Cotinuous Manner
//We Can Acces Element Randomly
//Array Index Start FroM Zero

//Function Protoype

int printf(const char*,...);

//Use of Macro

#define SIZE 10

//Entry Point Funtion

int arr[SIZE];

char char_array[SIZE];

float float_array[SIZE];

double double_array[SIZE];



int main(void ) {
	
	int Array[SIZE]; //Local Scope, array is not initialized > garbage value

	char Char_Array[SIZE];
	
	float Float_Array[SIZE];

	double Double_Array[SIZE];

	printf("Array Value: ");

	//For Printing Local Array
	printf("___________________________________________________\n______________________________________________________\n");
	for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

		printf("%d ,\n",Array[index]);	//print value at Index

	}

	//For Printing Global Array
	//In C, static and global variables are initialized by the compiler itself. Therefore, they must be initialized with a constant value.
	//
	printf("___________________________________________________\n______________________________________________________\n");
	for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

                printf("%d ,\n",arr[index]);    //print value at Index

        }

	//For Printing Local Charaachter Array
	//
	printf("___________________________________________________\n______________________________________________________\n");
        for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

                printf("%c ,\n",Char_Array[index]);    //print value at Index

        }
	//For Prinritning Global Character Array
	//
	printf("___________________________________________________\n______________________________________________________\n");
        for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

                printf("%c ,\n",char_array[index]);    //print value at Index

        }

	printf("___________________________________________________\n______________________________________________________\n");

	for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

                printf("%f ,\n",float_array[index]);    //print value at Index

        }
	printf("__________________________________________________\n_______________________________________________________\n");

	for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

		printf("%f ,\n",Float_Array[index]);    //print value at Index

	}

	     printf("___________________________________________________\n______________________________________________________\n");

        for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

                printf("%f ,\n",double_array[index]);    //print value at Index

        }
        printf("__________________________________________________\n_______________________________________________________\n");

        for(int index = 0 ; index<=SIZE-1 ; index++) { //Interate Untill Conditon Is False

                printf("%f ,\n",Double_Array[index]);    //print value at Index

        }

	printf("\b");

	return 0;
}	

