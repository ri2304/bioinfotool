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
	int n;   // Variable to keep count of each line
    float P1=0,a=0,P2=0,c=0,P3=0,d=0,e=0,P4=0,f=0,P5=0,P6=0,g=0,P7=0,h=0,P8=0,i1=0,P9=0,k=0,l=0,P10=0,P11=0,m=0,P12=0,z=0,P13=0,o=0,P14=0,p=0,P15=0,q=0,P16=0,r=0,P17=0,s=0,P18=0,t=0,u=0,P19=0,P20=0,v=0,P21=0,w=0,P22=0,y,b;

	ifstream mFile (filename);
	ofstream My_Output_File;
	My_Output_File.open("last1.txt");


	if(mFile.is_open())
	{
		while(mFile.peek()!=EOF)
		{
			getline(mFile, line);
			if(line==ter)
            {
                count++;
                continue ;
                My_Output_File<<line<<endl;

            }





            if(line[0]!='>')

            {

                n=line.length();
		      	My_Output_File<<"THE SIZE OF SEQUENCE:"<<n<<endl;
		      	My_Output_File<<line<<endl;




        //FOR ALANINE





                 if(line[0]=='A')
                    {
                       My_Output_File<<"The n terminal of the sequence is A so ALA"<<endl;
                       My_Output_File<<"Amino Acid: ALANINE"<<endl;
                       My_Output_File<<"Mammalian:4.4 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }



                  else if(line[0]=='C')
                    {
                       My_Output_File<<"The n terminal of the sequence is C so CYS"<<endl;
                       My_Output_File<<"Amino Acid: cystine"<<endl;
                       My_Output_File<<"Mammalian:1.2 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='D')
                    {
                       My_Output_File<<"The n terminal of the sequence is D so ASP"<<endl;
                       My_Output_File<<"Amino Acid: aspartic acid"<<endl;
                       My_Output_File<<"Mammalian:1.1 hour"<<endl;
                       My_Output_File<<"Yeast:3 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='E')
                    {
                       My_Output_File<<"The n terminal of the sequence is E so GLU"<<endl;
                       My_Output_File<<"Amino Acid: Glutamic acid"<<endl;
                       My_Output_File<<"Mammalian:1 hour"<<endl;
                       My_Output_File<<"Yeast:30 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='F')
                    {
                       My_Output_File<<"The n terminal of the sequence is F so Phe"<<endl;
                       My_Output_File<<"Amino Acid: Phenylalinine"<<endl;
                       My_Output_File<<"Mammalian:1.1 hour"<<endl;
                       My_Output_File<<"Yeast:3 hour"<<endl;
                       My_Output_File<<"E. coli:2 min"<<endl;
                    }
                     else if(line[0]=='G')
                    {
                       My_Output_File<<"The n terminal of the sequence is G so Gly"<<endl;
                       My_Output_File<<"Amino Acid: Glycine"<<endl;
                       My_Output_File<<"Mammalian:30 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='H')
                    {
                       My_Output_File<<"The n terminal of the sequence is G so His"<<endl;
                       My_Output_File<<"Amino Acid: Histidine"<<endl;
                       My_Output_File<<"Mammalian:3.5 hour"<<endl;
                       My_Output_File<<"Yeast:10 min"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='I')
                    {
                       My_Output_File<<"The n terminal of the sequence is I so Iln "<<endl;
                       My_Output_File<<"Amino Acid: Isoleucine"<<endl;
                       My_Output_File<<"Mammalian:20 hour"<<endl;
                       My_Output_File<<"Yeast:30 min"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='K')
                    {
                       My_Output_File<<"The n terminal of the sequence is K so lYS "<<endl;
                       My_Output_File<<"Amino Acid: Lysine"<<endl;
                       My_Output_File<<"Mammalian:1.3 hour"<<endl;
                       My_Output_File<<"Yeast:3 min"<<endl;
                       My_Output_File<<"E. coli:2 min"<<endl;
                    }
                     else if(line[0]=='L')
                    {
                       My_Output_File<<"The n terminal of the sequence is L so Leu "<<endl;
                       My_Output_File<<"Amino Acid: Leucine"<<endl;
                       My_Output_File<<"Mammalian:5.5 hour"<<endl;
                       My_Output_File<<"Yeast:3 min"<<endl;
                       My_Output_File<<"E. coli:2 min"<<endl;
                    }
                     else if(line[0]=='M')
                    {
                       My_Output_File<<"The n terminal of the sequence is M so Met"<<endl;
                       My_Output_File<<"Amino Acid: Metheonine"<<endl;
                       My_Output_File<<"Mammalian:30 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='N')
                    {
                       My_Output_File<<"The n terminal of the sequence is N so ASN"<<endl;
                       My_Output_File<<"Amino Acid: ASPARAGINE"<<endl;
                       My_Output_File<<"Mammalian:1.4 hour"<<endl;
                       My_Output_File<<"Yeast:3 min"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='P')
                    {
                       My_Output_File<<"The n terminal of the sequence is P so Pro"<<endl;
                       My_Output_File<<"Amino Acid: Proline"<<endl;
                       My_Output_File<<"Mammalian:>20 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>?"<<endl;
                    }
                     else if(line[0]=='Q')
                    {
                       My_Output_File<<"The n terminal of the sequence is Q so Gln"<<endl;
                       My_Output_File<<"Amino Acid: Glutamine"<<endl;
                       My_Output_File<<"Mammalian:0.8 hour"<<endl;
                       My_Output_File<<"Yeast:10 min"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='R')
                    {
                       My_Output_File<<"The n terminal of the sequence is R so Arg"<<endl;
                       My_Output_File<<"Amino Acid: Arginine"<<endl;
                       My_Output_File<<"Mammalian:1 hour"<<endl;
                       My_Output_File<<"Yeast:2 min"<<endl;
                       My_Output_File<<"E. coli:2 min"<<endl;
                    }
                    else if(line[0]=='S')
                    {
                       My_Output_File<<"The n terminal of the sequence is S so Ser"<<endl;
                       My_Output_File<<"Amino Acid: Serine"<<endl;
                       My_Output_File<<"Mammalian:1.9 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='T')
                    {
                       My_Output_File<<"The n terminal of the sequence is T so Thr"<<endl;
                       My_Output_File<<"Amino Acid: Threonine"<<endl;
                       My_Output_File<<"Mammalian:7.2hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='V')
                    {
                       My_Output_File<<"The n terminal of the sequence is V so Val"<<endl;
                       My_Output_File<<"Amino Acid: Valine"<<endl;
                       My_Output_File<<"Mammalian:100 hour"<<endl;
                       My_Output_File<<"Yeast:>20 hour"<<endl;
                       My_Output_File<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='W')
                    {
                       My_Output_File<<"The n terminal of the sequence is W so Trp"<<endl;
                       My_Output_File<<"Amino Acid: Tryptophan"<<endl;
                       My_Output_File<<"Mammalian:2.8 hour"<<endl;
                       My_Output_File<<"Yeast:3 min"<<endl;
                       My_Output_File<<"E. coli:2 min"<<endl;
                    }
                      else if(line[0]=='Y')
                    {
                       My_Output_File<<"The n terminal of the sequence is Y so Tyr"<<endl;
                       My_Output_File<<"Amino Acid: Tyrosine"<<endl;
                       My_Output_File<<"Mammalian:2.8 hour"<<endl;
                       My_Output_File<<"Yeast:10 min"<<endl;
                       My_Output_File<<"E. coli:2 min"<<endl;
                    }
                      else
                      {
                        My_Output_File<<"No half life"<<endl;
                      }





      }
		mFile.close();
        My_Output_File<<"Number of sequences in the file are: "<<count<<endl;
    }


}
  else

    {
        My_Output_File<<"Couldn't open the file\n";

    }




  My_Output_File.close();






	return 0;
}
