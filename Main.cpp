#include <iostream>
#include <string>

using namespace std;

int main() {
    while(1)
    {
        const int paintings=4;
    
        int ratings[]={0,0,0,0};
        
        int max=0, most=0;
        
        string keywords[paintings][10]=
        {
            {" cave ", " drawing "," janitor "," cleaner "," washing "," cleaning ", ";", ";", ";", ";"},
            {" diogenes ", " quote ", " writing ", " kid ", " child ", " original ", " thought ", " mindless ", " quotings " , " philosophy " },
            {" framed ", " nice ", " kid ", " child ", " money ", " look ", " sell ", " selling ", " buy ", " buying "},
            {" shopping ", " cart ", " falling ", " food ", " woman ", " building ", " high ", " tall ", ";", ";"}
        };
        
        string in="\0";
        cout << "Describe the painting. Don't use punctuation/capitalization:\n";
        getline(cin, in);
        in = " " + in + " ";
        
        for(int x=0; x<4; x++){
            for(int y=0; y<10; y++)
            {
                string current=keywords[x][y];
                if (in.find(current) != std::string::npos) {
                    ratings[x]++;
                }
            }
        }
        
        for(int i = 0; i<4; i++){
            if(ratings[i] > max)
            {
                max=ratings[i];
                most=i;
            }
        }
        
        switch(most){
            case 0:
                cout << "Guess: Banksy 1: http://polr.me/1cq";
                break;
            case 1:
                cout << "Guess: Banksy 2: http://polr.me/1cr";
                break;
            case 2:
                cout << "Guess: Banksy 3: http://polr.me/1cs";
                break;
            case 3:
                cout << "Guess: Banksy 4: http://polr.me/1ct";
                break;
        }
        
    }
    
    return 0;
}
