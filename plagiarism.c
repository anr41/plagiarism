//plagiarism checker
//Ashley Roberson

#include<stdlib.h>
#include<stdio.h>

char f1next, f2next;
FILE *f1, *f2;
int similarity, size;

void getChar(FILE *f1, FILE *f2){
	f1next = getc(f1);
	f2next = getc(f2);}

void similarity(FILE *f1, FILE *f2){
	if(f1next == f2next){
		size++;
		similarity++;}
	else{
		size++;}}

int check(FILE *f1, FILE *f2){
	similiarity = 0;
	size = 0;
	f1 = fopen(f1, "r");
	fopen(f2, "r");
	if(f1 == NULL || f2 == NULL){
		printf("Invalid file. Try uploading again.\n");
		exit(1);}
	else{
		getChar(f1, f2);
		if(f1next == NULL || f2next == NULL){
			exit(1);}
		else{ 
			similarity(f1, f2);}

		while(f1next != NULL && f2next != NULL){
			getChar(f1, f2);
			similarity(f1, f2);}
	
		int percent = similarity / size;
		return percent;}}

//in command line first argument needs to be the solutions and second argument needs to be the student's assignment
void main(int argc, *char argv[]){
	//Assuming everything is entered correctly in the command line
	f1 = argv[0];
	f2 = argv[1];
	fprintf("Similarity: %d\n", check(f1, f2));}

			

