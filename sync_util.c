#import <stdio.h>

struct file{
	char* local_location;
	char* file_id;
};

struct computer{
	char* ip_address;
	char* port_num;
	struct file* sync_files;
	int line_position;
};

struct computer* computer_sync_list;
int sync_boolean = 1;


int find_num_computers(FILE* fp){
	printf("Entered the fund_num_computers function\n\n");
	int lineCount = 0;
	char c = getc(fp);
	
	while(c != EOF){
		c = getc(fp);
		if(c == '\n'){
			lineCount++;
			printf("there are %d lines\n", lineCount);
		}
	}
	return lineCount;
}
struct computer* import_configs(){
	struct computer* computer_list;

	//open the configs.csv
	FILE* computerFile = fopen("computers.csv", "r");
	FILE* syncFiles = fopen("files.csv", "r");

	if(computerFile == NULL){
		printf("Could not open files computers.csv\n");
		return 0;
	}
	if(syncFiles == NULL){
		printf("Could not open files syncFiles.csv\n");
		//return 0;
	}

	//read in the config file row by row for computers.csv
	int numComputers = find_num_computers(computerFile);

	//search files.csv for each computer for the files to be synced on that computer.


	return computer_list;
}


void sync_files(struct computer* computer_list){

}

int main(){

	//read in the config file
	computer_sync_list = import_configs();

	//sync the files repeatedly until system exit
	/*while(true){
		sleep(1);
		sync_files();
	}*/

	return 0;
}