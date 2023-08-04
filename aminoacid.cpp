#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string filename;   // Name of the file
	cout<<"Enter filename:";
	cin>>filename;

	string line;   // To read each line from code
	string ter="*";
	int count=0;
	int i;
	int j;
	int n;   // Variable to keep count of each line

	ifstream mFile (filename);

	if(mFile.is_open())
	{
		while(mFile.peek()!=EOF)
		{
			getline(mFile, line);
			if(line==ter)
            {
                continue ;
            }

            cout<<line<<endl;
			count++;
			cout<<"THE SIZE OF SEQUENCE:"<<line.length()<<endl;


		}
		mFile.close();
		cout<<"Number of sequences in the file are: "<<count<<endl;
	}
	else

    {
        cout<<"Couldn't open the file\n";

    }









	return 0;
}


