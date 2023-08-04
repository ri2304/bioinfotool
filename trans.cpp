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
	string ter=">";
	int count=0;
	int i;
	int j;
	int n;
	int t;
	char change;   // Variable to keep count of each line
    float P1=0,a=0,P2=0,c=0,g,P12;
	ifstream mFile (filename);
	ofstream My_Output_File;
	My_Output_File.open("rna-protein.txt");


	if(mFile.is_open())
	{
		while(mFile.peek()!=EOF)
		{
			getline(mFile, line);
			if(line==ter)
            {
                count++;
                continue ;

            }



            My_Output_File<<line<<endl;


            if(line[0]!='>')

            {
                t++;
                n=line.length();
		      	My_Output_File<<"THE SIZE OF SEQUENCE:"<<n<<endl;



                     //FOR DNA~RNA~PROTEIN

                    for(i=0;i<n;i++)
                     {
                         if(line[i]=='T')
                         {
                            change=line[i];
                            line[i]='U';
                         }
                     }

                            My_Output_File<<"The RNA sequence is:"<<line<<endl;

                      for(i=0;i<=(n-3);i+=3)
                      {



                        if(line[i]=='U'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Phenylalinine"<<endl;
                            }
                        if(line[i]=='U'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Leucine"<<endl;
                            }
                        if(line[i]=='U'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Serine"<<endl;
                            }
                        if(line[i]=='U'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Tyrosin"<<endl;
                            }
                        if(line[i]=='U'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"STOP CODON"<<endl;
                                break;
                            }
                        if(line[i]=='U'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Cystine"<<endl;
                                continue;
                            }
                        if(line[i]=='U'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='A')
                                My_Output_File<<"STOP CODON"<<endl;
                                break;
                            }
                        if(line[i]=='U'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='G')
                                My_Output_File<<"Trytophan"<<endl;
                            }
                        if(line[i]=='C'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Leucine"<<endl;
                            }
                        if(line[i]=='C'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Proline"<<endl;
                            }
                        if(line[i]=='C'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Histidine"<<endl;
                            }
                        if(line[i]=='C'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Glutamine"<<endl;
                            }
                         if(line[i]=='C'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Arginine"<<endl;
                            }
                        if(line[i]=='A'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A')
                                My_Output_File<<"Isoleucine"<<endl;
                            }
                        if(line[i]=='A'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='G')
                                My_Output_File<<"Methionine"<<endl;
                            }
                         if(line[i]=='A'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Threonine"<<endl;
                            }
                        if(line[i]=='A'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Asparagine"<<endl;
                            }
                         if(line[i]=='A'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Lysine"<<endl;
                            }
                        if(line[i]=='A'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Serine"<<endl;
                            }
                         if(line[i]=='A'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Arginine"<<endl;
                            }
                         if(line[i]=='G'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Valine"<<endl;
                            }
                         if(line[i]=='G'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Alanine"<<endl;
                            }
                        if(line[i]=='G'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                My_Output_File<<"Asparine"<<endl;
                            }
                        if(line[i]=='G'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Glutamine"<<endl;
                            }
                         if(line[i]=='G'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                My_Output_File<<"Glysine"<<endl;
                            }
                          }





                     }


            }



		mFile.close();
        My_Output_File<<"Number of sequences in the file are: "<<t<<endl;
	}


	else

    {
        My_Output_File<<"Couldn't open the file\n";

    }




  My_Output_File.close();





	return 0;
}
