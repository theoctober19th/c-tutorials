#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <sys/stat.h>

void print_usage(){
    fprintf(stdout, "Usage:\n");
    fprintf(stdout, "copy [options] source_filename destination_filename\n");
    fprintf(stdout, "\nOptions:\n");
    fprintf(stdout, "-h, --help            display this help message and exit\n");
    fprintf(stdout, "-w, --warning         show warning if the ddestination already exists\n");
    fprintf(stdout, "-v, --version         show the version of the command and exit\n");
    fprintf(stdout, "-n, --numbytes N      copy only first N bytes from source to destination\n");
}

void print_version(){
    fprintf(stdout, "copy v1.0.0\n");
}

int file_exists(char *filename){
    struct stat buffer;
    return (stat(filename, &buffer) == 0);
}

int main(int argc, char *argv[]){

    char short_options[] = "hvwn:";
    struct option long_options[] = {
        {"help", no_argument, NULL, 'h'},
        {"version", no_argument, NULL, 'v'},
        {"warning", no_argument, NULL, 'w'},
        {"numbytes", required_argument, NULL, 'n'},
        {NULL, 0, NULL, 0}
    };
    int warning = 0;
    int num_bytes = -1;
    int optionindex = 0;
    int opt;
    while ( (opt = getopt_long(argc, argv, short_options, long_options, &optionindex)) != -1){
        switch(opt){
            case 'h':
                print_usage();
                exit(EXIT_SUCCESS);
            case 'v':
                print_version();
                exit(EXIT_SUCCESS);
            case 'w':
                warning = 1;
                break;
            case 'n':
                num_bytes = strtol(optarg, NULL, 10);
                break;
            case '?':
                fprintf(stderr, "Invalid option format\n");
                exit(EXIT_FAILURE);
        }
    }

    int posarg_count = argc - optind;
    if(posarg_count != 2){
        fprintf(stderr, "Invalid number of positional arguments.\n");
        print_usage();
        exit(EXIT_FAILURE);
    }

    char *source_filename = argv[optind];
    char *destination_filename = argv[optind + 1];

    if(warning && file_exists(destination_filename)){
        fprintf(stderr, "The destination filename %s already exists. Hence, aborting.\n", destination_filename);
        exit(EXIT_SUCCESS);
    }

    FILE *source_file = NULL, *destination_file = NULL;

    source_file = fopen(source_filename, "r");
    if(source_file == NULL){
        fprintf(stderr, "The file %s cannot be opened for reading.\n", source_filename);
        exit(EXIT_FAILURE);
    }

    destination_file = fopen(destination_filename, "w");
    if(destination_file == NULL){
        fprintf(stderr, "The file %s cannot be opened for writing.\n", destination_filename);
        fclose(source_file);
        exit(EXIT_FAILURE);
    }

    int ch, count = 0;
    while( (ch = fgetc(source_file)) != EOF){
        if(num_bytes >=0 && count >= num_bytes){
            break;
        }
        fputc(ch, destination_file);
        count++;
    }

    fclose(source_file);
    fclose(destination_file);

    return 0;
}