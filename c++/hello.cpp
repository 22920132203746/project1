#include<iostream>
#include<string>
#include<io.h>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	string path = "/home/crz/ProgramFile/caffe-master/data/1mnist/test/1";
	ofstream f("/home/crz/ProgramFile/caffe-master/test/data/test.txt");
	struct _finddata_t filefind;
	string curr = path+"\\*.*";
	int done = 0,i,handle;
	while(!(done=_findnext(handle,&filefind)))
{
	if(!strcmp(filefind.name,"..")) continue;
	cout<<filefind.name<<endl;
	f<<filefind.name<<"  "<<0<<endl;
}

	findclose(handle);
	f.close();
	return 0;
}
