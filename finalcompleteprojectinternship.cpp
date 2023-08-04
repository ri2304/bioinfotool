#include<iostream>
#include<math.h>
using namespace std;
int main()
{
      int choice, CHOICE, num, i ;
      unsigned long int fact;
      string line;
      int n;
      float P1=0,a=0,P2=0,c=0,P3=0,d=0,e=0,P4=0,f=0,P5=0,P6=0,g=0,P7=0,h=0,P8=0,i1=0,P9=0,k=0,l=0,P10=0,P11=0,m=0,P12=0,z=0,P13=0,o=0,P14=0,p=0,P15=0,q=0,P16=0,r=0,P17=0,s=0,P18=0,t=0,u=0,P19=0,P20=0,v=0,P21=0,w=0,P22=0,y,b;
      float s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0,s12=0,s13=0,s14=0,s15=0,s16=0,s17=0,s18=0,s19=0,s20=0,S=0;
      float GAH;
      int alanine=0,cystine=0,aspartic=0, glutamic=0,phenylalinine=0,glycine=0,histidine=0, isoleucine=0,lysine=0,leucine=0,met=0, asparagine=0,proline=0,glutamine=0,serine=0, threonine=0,valine=0, tryptophan=0,tyrosine=0, pyl=0,sec=0,arginine=0;
      int extinction,extinction1;
      int SUM1=0,noW=0,SUM2=0,noY=0,SUM3=0,noC=0;
      int INTREST;
      float pgs;
      int gc=0;
      char change,change2,change3,change4;
      float mol_weight=0,absorbance;
      while(1)
      {

          cout<<"                                   NUCLEOTIDE AND PROTEIN ANALYSIS \n";
          cout<<endl;
          cout<<"        > PROTEIN SEQUENCE ANALYSIS ";
          cout<<"\t";
          cout<<"                         > NUCLEOTIDE SEQUENCE ANALYSIS \n";
          cout<<endl;
          cout<<endl;
          cout<<"             * Enter your choice please:";
          cin>>CHOICE;
          cout<<endl;
          cout<<"        You have choosen:";
          cout<<endl<<endl<<endl;
          switch(CHOICE)
          {
          case 1:
             while (1)
        {
              cout<<endl<<endl;
              cout<<" >Protein Sequence Analysis     \n";
              cout<<endl;
              cout<<"    Dashboard \n";
              cout<<endl;
              cout<<"A. Amino Acid Composition";
              cout<<"\t\t";
              cout<<"      B. Half Life Analysis";
              cout<<"\t\t";
              cout<<"      C. Grand Average Hydropathy";
              cout<<"\n\n";
              cout<<"D. Extinction Coefficient";
              cout<<"\t\t";
              cout<<"      E. Molecular Weight";
              cout<<"\t\t";
              cout<<"      F. Absorbance";
              cout<<endl<<endl;
              cout<<"G. Exit  \n";
              cout<<endl<<endl;
              cout<<"\n      Which Character you would like to calculate:";
              cin>>choice ;
              switch (choice)
                     {
                         case 1 :
                                       cout<<endl<<endl;
                                       cout<<"\n    Enter the sequence:";
                                       cin>>line ;
                                       n=line.length();
                                       cout<<endl<<endl;
                                       cout<<"The length of sequence is:"<<n<<endl;
                                       for(i=0;i<=n;i++)
                                             {
                                               if(line[i]=='A')
                                                   {
                                                       a++;
                                                   }
                                             }
                                         cout<<endl<<endl<<"The no of Alanine in the sequence is "<<a<<endl;

                                         P1=(a*100)/n;

                                         cout<<endl<<endl<<"The composition of Alanine is:"<<P1<<endl;
                                         a=0;
                               //FOR CYESTINE

                                            for(i=0;i<=n;i++)
                                               {
                                                 if(line[i]=='C')
                                                    {
                                                         c++;
                                                    }
                                              }


                                        cout<<endl<<endl<<"The no of Cyestine in the sequence is "<<c<<endl;

                                        P2=(c*100)/n;

                                        cout<<endl<<endl<<"The composition of Cyestine is:"<<P2<<endl;
                                        c=0;
                             //FOR ASPARTIC ACID

                                              for(i=0;i<=n;i++)
                                                  {
                                                     if(line[i]=='D')
                                                         {
                                                               d++;
                                                         }
                                                }

                                        cout<<endl<<endl<<"The no of Aspartic Acid in the sequence is "<<d<<endl;

                                        P3=(d*100)/n;

                                        cout<<endl<<endl<<"The composition of Aspartic Acid is:"<<P3<<endl;
                                        d=0;
                          //FOR GLUTAMIC ACID
                                              for(i=0;i<=n;i++)
                                                  {
                                                    if(line[i]=='E')
                                                          {
                                                              e++;
                                                          }
                                                  }

                                        cout<<endl<<endl<<"The no of Glumatic Acid in the sequence is "<<e<<endl;

                                        P4=(e*100)/n;

                                        cout<<endl<<endl<<"The composition of Glutamic Acid is:"<<P4<<endl;
                                        e=0;
                        //FOR PHENYLALANINE
                                                   for(i=0;i<=n;i++)
                                                        {
                                                          if(line[i]=='F')
                                                            {
                                                                 f++;
                                                            }
                                                        }

                                      cout<<endl<<endl<<"The no of Phenylalanine in the sequence is "<<e<<endl;
                                      P5=(f*100)/n;

                                      cout<<endl<<endl<<"The composition of Phenylalanine is:"<<P4<<endl;
                                      f=0;

                        //FOR GLYCINE

                                                     for(i=0;i<=n;i++)
                                                          {
                                                            if(line[i]=='G')
                                                                 {
                                                                      g++;
                                                                 }
                                                          }

                                     cout<<endl<<endl<<"The no of Glycine in the sequence is "<<g<<endl;

                                     P6=(g*100)/n;

                                     cout<<endl<<endl<<"The composition of Glycine is:"<<P6<<endl;
                                     g=0;


                        //FOR HISTIDINE

                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='H')
                            {
                               h++;
                            }
                        }

                       cout<<endl<<endl<<"The no of Histidine in the sequence is "<<h<<endl;

                        P7=(h*100)/n;

                      cout<<endl<<endl<<"The composition of Histidine is:"<<P7<<endl;
                        h=0;




                        //FOR ISOLEUCINE
                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='I')
                            {
                               i++;
                            }
                        }

                      cout<<endl<<endl<<"The no of Isoleucine in the sequence is "<<i<<endl;

                        P8=(i*100)/n;

                        cout<<endl<<endl<<"The composition of Isoleucine is:"<<P8<<endl;
                        i=0;

                        //FOR LYCINE


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='K')
                            {
                               k++;
                            }
                        }

                       cout<<endl<<endl<<"The no of Lysine in the sequence is "<<k<<endl;

                        P9=(k*100)/n;

                       cout<<endl<<endl<<"The composition of Lysine is:"<<P9<<endl;
                        k=0;

                        //FOR LEUCINE


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='L')
                            {
                               l++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Leucine in the sequence is "<<l<<endl;

                        P10=(l*100)/n;

                        cout<<endl<<endl<<"The composition of Leucine is:"<<P10<<endl;
                        l=0;


                        //FOR METHEONINE


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='M')
                            {
                               m++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Metheonine in the sequence is "<<m<<endl;

                        P11=(m*100)/n;

                        cout<<endl<<endl<<"The composition of Metheonine is:"<<P11<<endl;
                        m=0;


                        //FOR ASPARAGINE



                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='N')
                            {
                               z++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Asparagine in the sequence is "<<z<<endl;

                        P12=(z*100)/n;

                        cout<<endl<<endl<<"The composition of Asparagine is:"<<P12<<endl;
                        z=0;




                        //FOR PYRROLYSINE


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='O')
                            {
                               o++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Pyrrolysine in the sequence is "<<o<<endl;

                        P13=(o*100)/n;

                        cout<<endl<<endl<<"The composition of Pyrrolysine is:"<<P13<<endl;
                        o=0;



                        //FOR PROLINE


                       for(i=0;i<=n;i++)
                        {
                        if(line[i]=='P')
                            {
                               p++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Proline in the sequence is "<<p<<endl;

                        P14=(p*100)/n;

                        cout<<endl<<endl<<"The composition of Proline is:"<<P14<<endl;
                        p=0;


                        //FOR GLUTAMINE


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='Q')
                            {
                               q++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Glutamine in the sequence is "<<q<<endl;

                        P15=(q*100)/n;

                        cout<<endl<<endl<<"The composition of Glutamine is:"<<P15<<endl;
                        q=0;


                        //FOR ARGININE


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='R')
                            {
                               r++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Arginine in the sequence is "<<r<<endl;

                        P16=(r*100)/n;

                        cout<<endl<<endl<<"The composition of Arginine is:"<<P16<<endl;
                        r=0;


                        //FOR SERINE




                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='S')
                            {
                               s++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Serine in the sequence is "<<s<<endl;

                        P17=(s*100)/n;

                        cout<<endl<<endl<<"The composition of Serine is:"<<P17<<endl;
                        s=0;



                      //FOR THREONINE

                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='T')
                            {
                               t++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Threonine in the sequence is "<<t<<endl;

                        P18=(t*100)/n;

                        cout<<endl<<endl<<"The composition of Threonine is:"<<P18<<endl;
                        t=0;


                        //FOR SEIENOCYSTEINE

                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='U')
                            {
                               u++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Seienocysteine in the sequence is "<<u<<endl;

                        P19=(u*100)/n;

                        cout<<endl<<endl<<"The composition of Seienocysteine is:"<<P19<<endl;
                        u=0;

                        //FOR VALINE

                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='V')
                            {
                               v++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Valine in the sequence is "<<v<<endl;

                        P20=(v*100)/n;

                        cout<<endl<<endl<<"The composition of Valine is:"<<P20<<endl;
                        v=0;

                        //FOR TRYPTOPHAN

                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='W')
                            {
                               b++;
                            }
                        }

                        cout<<endl<<endl<<"The no of  Tryptophan in the sequence is "<<b<<endl;

                        P21=(b*100)/n;

                        cout<<endl<<endl<<"The composition of Tryptophan is:"<<P21<<endl;
                        b=0;

                        //FOR TYROSIN


                         for(i=0;i<=n;i++)
                        {
                        if(line[i]=='Y')
                            {
                               w++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Tyrosin in the sequence is "<<w<<endl;

                        P22=(w*100)/n;

                        cout<<endl<<endl<<"The composition of Tyrosin is:"<<P22<<endl;
                        w=0;

                                       break ;
                         case 2 :
                                      cout<<"\n     Enter the sequence:";
                                      cin>>line ;
                                      n=line.length();
                                      cout<<endl<<endl<<"The length of sequence is:"<<n<<endl;
                                      if(line[0]=='A')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is A so ALA"<<endl;
                       cout<<endl<<endl<<"Amino Acid: ALANINE"<<endl;
                       cout<<endl<<endl<<"Mammalian:4.4 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }



                  else if(line[0]=='C')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is C so CYS"<<endl;
                       cout<<endl<<endl<<"Amino Acid: cystine"<<endl;
                       cout<<endl<<endl<<"Mammalian:1.2 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='D')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is D so ASP"<<endl;
                       cout<<endl<<endl<<"Amino Acid: aspartic acid"<<endl;
                       cout<<endl<<endl<<"Mammalian:1.1 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:3 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='E')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is E so GLU"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Glutamic acid"<<endl;
                       cout<<endl<<endl<<"Mammalian:1 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:30 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='F')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is F so Phe"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Phenylalinine"<<endl;
                       cout<<endl<<endl<<"Mammalian:1.1 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:3 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:2 min"<<endl;
                    }
                     else if(line[0]=='G')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is G so Gly"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Glycine"<<endl;
                       cout<<endl<<endl<<"Mammalian:30 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='H')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is G so His"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Histidine"<<endl;
                       cout<<endl<<endl<<"Mammalian:3.5 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:10 min"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='I')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is I so Iln "<<endl;
                       cout<<endl<<endl<<"Amino Acid: Isoleucine"<<endl;
                       cout<<endl<<endl<<"Mammalian:20 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:30 min"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='K')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is K so lYS "<<endl;
                       cout<<endl<<endl<<"Amino Acid: Lysine"<<endl;
                       cout<<endl<<endl<<"Mammalian:1.3 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:3 min"<<endl;
                       cout<<endl<<endl<<"E. coli:2 min"<<endl;
                    }
                     else if(line[0]=='L')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is L so Leu "<<endl;
                       cout<<endl<<endl<<"Amino Acid: Leucine"<<endl;
                       cout<<endl<<endl<<"Mammalian:5.5 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:3 min"<<endl;
                       cout<<endl<<endl<<"E. coli:2 min"<<endl;
                    }
                     else if(line[0]=='M')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is M so Met"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Metheonine"<<endl;
                       cout<<endl<<endl<<"Mammalian:30 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='N')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is N so ASN"<<endl;
                       cout<<endl<<endl<<"Amino Acid: ASPARAGINE"<<endl;
                       cout<<endl<<endl<<"Mammalian:1.4 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:3 min"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='P')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is P so Pro"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Proline"<<endl;
                       cout<<endl<<endl<<"Mammalian:>20 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>?"<<endl;
                    }
                     else if(line[0]=='Q')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is Q so Gln"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Glutamine"<<endl;
                       cout<<endl<<endl<<"Mammalian:0.8 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:10 min"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='R')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is R so Arg"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Arginine"<<endl;
                       cout<<endl<<endl<<"Mammalian:1 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:2 min"<<endl;
                       cout<<endl<<endl<<"E. coli:2 min"<<endl;
                    }
                    else if(line[0]=='S')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is S so Ser"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Serine"<<endl;
                       cout<<endl<<endl<<"Mammalian:1.9 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='T')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is T so Thr"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Threonine"<<endl;
                       cout<<endl<<endl<<"Mammalian:7.2hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                    else if(line[0]=='V')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is V so Val"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Valine"<<endl;
                       cout<<endl<<endl<<"Mammalian:100 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:>20 hour"<<endl;
                       cout<<endl<<endl<<"E. coli:>10 hour"<<endl;
                    }
                     else if(line[0]=='W')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is W so Trp"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Tryptophan"<<endl;
                       cout<<endl<<endl<<"Mammalian:2.8 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:3 min"<<endl;
                       cout<<endl<<endl<<"E. coli:2 min"<<endl;
                    }
                      else if(line[0]=='Y')
                    {
                       cout<<endl<<endl<<"The n terminal of the sequence is Y so Tyr"<<endl;
                       cout<<endl<<endl<<"Amino Acid: Tyrosine"<<endl;
                       cout<<endl<<endl<<"Mammalian:2.8 hour"<<endl;
                       cout<<endl<<endl<<"Yeast:10 min"<<endl;
                       cout<<endl<<endl<<"E. coli:2 min"<<endl;
                    }
                      else
                      {
                        cout<<endl<<endl<<"No half life"<<endl;
                      }

                                                break;
                         case 3 :
                                          cout<<"\nEnter THE SEQUENCE:";
                                          cin>>line ;
                                          n=line.length();
                                          cout<<endl<<endl<<"The length of sequence is:"<<n<<endl;
                                     for(i=0;i<n;i++)
                {
                    if(line[i]=='A')
                    {
                      s1=1.800;

                    }



                  else if(line[i]=='C')
                    {
                      s2=2.500;
                    }
                    else if(line[i]=='D')
                    {
                       s3=3.500;
                    }
                    else if(line[i]=='E')
                    {
                       s4=3.500;
                    }
                    else if(line[i]=='F')
                    {
                       s5=2.800;
                    }
                     else if(line[i]=='G')
                    {
                       s6=0.400;
                    }
                     else if(line[i]=='H')
                    {
                       s7=3.200;
                    }
                    else if(line[i]=='I')
                    {
                      s8=4.500;
                    }
                     else if(line[i]=='K')
                    {
                       s9=3.900;
                    }
                     else if(line[i]=='L')
                    {
                       s10=3.800;
                    }
                     else if(line[i]=='M')
                    {
                      s11=1.900;
                    }
                     else if(line[i]=='N')
                    {
                       s12=3.500;
                    }
                    else if(line[i]=='P')
                    {
                       s13=1.600;
                    }
                     else if(line[i]=='Q')
                    {
                      s14=3.500;
                    }
                     else if(line[i]=='R')
                    {
                      s15=4.500;
                    }
                    else if(line[i]=='S')
                    {
                      s16=0.800;
                    }
                    else if(line[i]=='T')
                    {
                      s17=0.700;
                    }
                    else if(line[i]=='V')
                    {
                       s18=4.200;
                    }
                     else if(line[i]=='W')
                    {
                      s19=0.900;
                    }
                      else if(line[i]=='Y')
                    {
                      s20=1.300;
                    }
                     else
                      {
                        cout<<endl<<endl<<"No half life"<<endl;
                      }

                }
                S=S+(s1+s2+s5+s8+s10+s11+s18-s3-s4-s6-s7-s9-s12-s13-s14-s15-s16-s17-s19-s20);
                cout<<endl<<endl<<S<<endl;

                GAH=S/n;
                cout<<endl<<endl<<"Grand Average of Hydropathy"<<GAH<<endl;

                                          break;
                          case 4 :
                                       cout<<"\n Enter the sequence:";
                                       cin>>line ;
                                       n=line.length();
                                       cout<<endl<<endl<<"The length of sequence is:"<<n<<endl;
                                       for(i=0;i<n;i++)
                                         {
                                           if(line[i]=='W')
                                                {
                                                  noW++;
                                                }




                                           else if(line[i]=='C')
                                                {
                                                     noC++;
                                                }

                                           else if(line[i]=='Y')
                                                {
                                                    noY++;
                                                }


                                        }
                                          cout<<endl<<endl<<"assuming all pairs of Cys residues form cystines"<<endl;
                                          extinction=(noW*1490)+((noC/2)*125)+(noY*5500);
                                          cout<<endl<<endl<<extinction<<endl;
                                          cout<<endl<<endl<<"assuming all Cys residues are reduced"<<endl;

                                          extinction1=(noW*1490)+(noY*5500);
                                          cout<<endl<<endl<<extinction1<<endl;



                                      break;
                          case 5:
                                          cout<<"\nEnter THE SEQUENCE:";
                                          cin>>line ;
                                          n=line.length();
                                          cout<<endl<<endl<<"The length of sequence is:"<<n<<endl;
                                    	for(i=0;i<n;i++)
                {
                    if(line[i]=='A')
                    {
                     alanine++;

                    }



                  else if(line[i]=='C')
                    {
                      cystine++;
                    }
                    else if(line[i]=='D')
                    {
                     aspartic++;
                    }
                    else if(line[i]=='E')
                    {
                       glutamic++;
                    }
                    else if(line[i]=='F')
                    {
                     phenylalinine++;
                    }
                     else if(line[i]=='G')
                    {
                      glycine++;
                    }
                     else if(line[i]=='H')
                    {
                       histidine++;
                    }
                    else if(line[i]=='I')
                    {
                    isoleucine++;
                    }
                     else if(line[i]=='K')
                    {
                      lysine++;
                    }
                     else if(line[i]=='L')
                    {
                       leucine++;
                    }
                     else if(line[i]=='M')
                    {
                      met++;
                    }
                     else if(line[i]=='N')
                    {
                       asparagine++;
                    }
                    else if(line[i]=='P')
                    {
                       proline++;
                    }
                     else if(line[i]=='Q')
                    {
                      glutamine++;
                    }
                     else if(line[i]=='R')
                    {
                     arginine++;
                    }
                    else if(line[i]=='S')
                    {
                     serine++;
                    }
                    else if(line[i]=='T')
                    {
                      threonine++;
                    }
                    else if(line[i]=='V')
                    {
                       valine++;
                    }
                     else if(line[i]=='W')
                    {
                      tryptophan++;
                    }
                      else if(line[i]=='Y')
                    {
                      tyrosine++;
                    }
                     else if(line[i]=='O')
                    {
                      pyl++;
                    }
                    else if(line[i]=='Y')
                    {
                     sec++;
                    }
                     else
                      {
                        cout<<endl<<endl<<"No ANSWER"<<endl;
                      }

                }

                mol_weight=mol_weight+((71.08*alanine)+(156.2*arginine)+(114.11*asparagine)+(115.09*aspartic)+(103.14*cystine)+(128.14*glutamine)+(129.12*glutamic)+(57.06*glycine)+(137.15* histidine)+(113.17*isoleucine)+(113.17*leucine)+(128.18*lysine)+(131.21*met)+(147.18*phenylalinine)+(97.12* proline)+(87.08*serine)+(101.11* threonine)+(186.21*tryptophan)+(163.18*tyrosine)+(99.14*valine));
                cout<<endl<<endl<<mol_weight<<endl;


                            break;
                            case 6:
                                          cout<<"\nEnter THE SEQUENCE:";
                                          cin>>line ;
                                          n=line.length();
                                          cout<<endl<<endl<<"The length of sequence is:"<<n<<endl;
                                           for(i=0;i<n;i++)
                                         {
                                           if(line[i]=='W')
                                                {
                                                  noW++;
                                                }




                                           else if(line[i]=='C')
                                                {
                                                     noC++;
                                                }

                                           else if(line[i]=='Y')
                                                {
                                                    noY++;
                                                }


                                        }
                                          cout<<endl<<endl<<"assuming all pairs of Cys residues form cystines"<<endl;
                                          extinction=(noW*1490)+((noC/2)*125)+(noY*5500);
                                          cout<<endl<<endl<<extinction<<endl;
                                          cout<<endl<<endl<<"assuming all Cys residues are reduced"<<endl;

                                          extinction1=(noW*1490)+(noY*5500);
                                          cout<<endl<<endl<<extinction1<<endl;

                                          for(i=0;i<n;i++)
                {
                    if(line[i]=='A')
                    {
                     alanine++;

                    }



                  else if(line[i]=='C')
                    {
                      cystine++;
                    }
                    else if(line[i]=='D')
                    {
                     aspartic++;
                    }
                    else if(line[i]=='E')
                    {
                       glutamic++;
                    }
                    else if(line[i]=='F')
                    {
                     phenylalinine++;
                    }
                     else if(line[i]=='G')
                    {
                      glycine++;
                    }
                     else if(line[i]=='H')
                    {
                       histidine++;
                    }
                    else if(line[i]=='I')
                    {
                    isoleucine++;
                    }
                     else if(line[i]=='K')
                    {
                      lysine++;
                    }
                     else if(line[i]=='L')
                    {
                       leucine++;
                    }
                     else if(line[i]=='M')
                    {
                      met++;
                    }
                     else if(line[i]=='N')
                    {
                       asparagine++;
                    }
                    else if(line[i]=='P')
                    {
                       proline++;
                    }
                     else if(line[i]=='Q')
                    {
                      glutamine++;
                    }
                     else if(line[i]=='R')
                    {
                     arginine++;
                    }
                    else if(line[i]=='S')
                    {
                     serine++;
                    }
                    else if(line[i]=='T')
                    {
                      threonine++;
                    }
                    else if(line[i]=='V')
                    {
                       valine++;
                    }
                     else if(line[i]=='W')
                    {
                      tryptophan++;
                    }
                      else if(line[i]=='Y')
                    {
                      tyrosine++;
                    }
                     else if(line[i]=='O')
                    {
                      pyl++;
                    }
                    else if(line[i]=='Y')
                    {
                     sec++;
                    }
                     else
                      {
                        cout<<endl<<endl<<"No ANSWER"<<endl;
                      }

                }

                mol_weight=mol_weight+((71.08*alanine)+(156.2*arginine)+(114.11*asparagine)+(115.09*aspartic)+(103.14*cystine)+(128.14*glutamine)+(129.12*glutamic)+(57.06*glycine)+(137.15* histidine)+(113.17*isoleucine)+(113.17*leucine)+(128.18*lysine)+(131.21*met)+(147.18*phenylalinine)+(97.12* proline)+(87.08*serine)+(101.11* threonine)+(186.21*tryptophan)+(163.18*tyrosine)+(99.14*valine));
                cout<<endl<<endl<<mol_weight<<endl;


                     absorbance=extinction/mol_weight;
                     cout<<endl<<endl<<"Absorbance:"<<absorbance<<endl;





                                break;

                          case 7:
                                  exit(0);
                     }
                     break;
                      case 2 :
                          while (1)
                      {
                           cout<<" Nucleotide Sequence Analysis      \n";
                           cout<<endl<<endl;
                           cout<<" Dashboard  \n";
                           cout<<endl<<endl;
                           cout<<"A. CENTRAL DOGMA ";
                           cout<<"\t\t";
                           cout<<"                                                B.COMPLEMENTARY SEQUENCE\n";
                           cout<<endl<<endl;
                           cout<<"C. GC SEQUENCE COMPOSITION ";
                           cout<<"\t\t";
                           cout<<"                                        D.EXIT \n";
                           cout<<endl<<endl;
                           cout<<"\n     Which Characterstics you would like to know:";
                           cin>>INTREST ;

                           switch(INTREST)
                                      {
                                          case 1:
                                              cout<<endl<<endl;
                                              cout<<"\n Enter the sequence:";
                                              cin>>line ;
                                              n=line.length();
                                              cout<<endl<<endl;
                                              cout<<"The length of sequence is:"<<n<<endl;
                                               for(i=0;i<n;i++)
                     {
                         if(line[i]=='T')
                         {
                            change=line[i];
                            line[i]='U';
                         }
                     }

                            cout<<endl<<endl<<"The RNA sequence is:"<<line<<endl;
                            cout<<endl<<"-----";

                      for(i=0;i<=(n-3);i+=3)
                      {



                        if(line[i]=='U'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                cout<<"Phenylalinine"<<"-----";
                            }
                        if(line[i]=='U'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Leucine"<<"-----";
                            }
                        if(line[i]=='U'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Serine"<<"-----";
                            }
                        if(line[i]=='U'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                cout<<"Tyrosin"<<"-----";
                            }
                        if(line[i]=='U'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                cout<<"STOP CODON"<<"-----";
                                break;
                            }
                        if(line[i]=='U'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                               cout<<"Cystine"<<"-----";
                                continue;
                            }
                        if(line[i]=='U'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='A')
                                cout<<"STOP CODON"<<"-----";
                                break;
                            }
                        if(line[i]=='U'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='G')
                                cout<<"Trytophan"<<"-----";
                            }
                        if(line[i]=='C'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Leucine"<<"-----";
                            }
                        if(line[i]=='C'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Proline"<<"-----";
                            }
                        if(line[i]=='C'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                cout<<"Histidine"<<"-----";
                            }
                        if(line[i]=='C'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Glutamine"<<"-----";
                            }
                         if(line[i]=='C'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Arginine"<<"-----";
                            }
                        if(line[i]=='A'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A')
                                cout<<"Isoleucine"<<"-----";
                            }
                        if(line[i]=='A'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='G')
                                cout<<"Methionine"<<"-----";
                            }
                         if(line[i]=='A'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Threonine"<<"-----";
                            }
                        if(line[i]=='A'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                cout<<"Asparagine"<<"-----";
                            }
                         if(line[i]=='A'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Lysine"<<"-----";
                            }
                        if(line[i]=='A'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                cout<<"Serine"<<"-----";
                            }
                         if(line[i]=='A'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Arginine"<<"-----";
                            }
                         if(line[i]=='G'&&line[i+1]=='U')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Valine"<<"-----";
                            }
                         if(line[i]=='G'&&line[i+1]=='C')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Alanine"<<"-----";
                            }
                        if(line[i]=='G'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C')
                                cout<<"Asparine"<<"-----";
                            }
                        if(line[i]=='G'&&line[i+1]=='A')
                            {
                              if(line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Glutamine"<<"-----";
                            }
                         if(line[i]=='G'&&line[i+1]=='G')
                            {
                              if(line[i+2]=='U'||line[i+2]=='C'||line[i+2]=='A'||line[i+2]=='G')
                                cout<<"Glysine"<<"-----";
                            }
                          }


                                            break;
                                          case 2:
                                               cout<<endl<<endl;
                                               cout<<"\n Enter the sequence:";
                                               cout<<endl<<endl;
                                               cin>>line ;
                                               n=line.length();
                                               cout<<endl<<endl<<"The length of sequence is:"<<n<<endl;
                                               cout<<"-------";
                                               for(i=0;i<n;i++)
                                                  {
                                                      if(line[i]=='C')
                                                             {

                                                               cout<<"G"<<"-----";
                                                             }
                                                      if(line[i]=='A')
                                                             {

                                                               cout<<"T"<<"-----";
                                                             }
                                                      if(line[i]=='T')
                                                             {

                                                               cout<<"A"<<"-----";
                                                             }
                                                       if(line[i]=='G')
                                                             {

                                                               cout<<"C"<<"-----";
                                                             }
                                                    }


        //DELETE

        //DELETE
                                             break;
                                          case 3:
                                               cout<<endl<<endl;
                                               cout<<"\n Enter the sequence:";
                                               cout<<endl<<endl;
                                               cin>>line ;
                                               n=line.length();
                                               cout<<endl<<endl<<"The length of sequence is:"<<n<<endl<<endl;
                                               for(i=0;i<n;i++)
                        {
                        if(line[i]=='G'||line[i]=='C')
                            {
                               gc++;
                            }
                        }

                        cout<<endl<<endl<<"The no of Glycine and Cyestine in the sequence is "<<gc<<endl;


                        pgs=(gc*100)/n;
                        cout<<endl<<endl<<"The percentage of GC sequence is"<<pgs<<endl;


        //DISPLAY
                                            break;
                                          case 4:
                                                 exit(0);
}
break;
                      }
                    //  break;

          }
         // break;
      }
     // break;
    }

                                    return 0;
}
