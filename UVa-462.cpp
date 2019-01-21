#include <iostream>
#include <string.h>
using namespace std;

char suits[] = {'S', 'H', 'D', 'C'};
char figs[] = {'J', 'Q', 'K', 'A'};

string cards[13];
int total[4], figures[4][4]; //first index is the suit
int stopped[4];

void countCards()
{
  for(int i = 0; i < 13; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      if(cards[i][1] == suits[j])
      {
        total[j]++;
        for(int k = 0; k < 4; k++)
          if(cards[i][0] == figs[k])
            figures[j][k]++;   

        break;     
      }
    }
  }
}

bool allStopped()
{
  return (stopped[0] && stopped[1] && stopped[2] && stopped[3]);
}

int main() {

  while(cin>>cards[0])
  {
    memset(total, 0, sizeof(total));
    memset(figures, 0, sizeof(figures));
    memset(stopped, 0, sizeof(stopped));

    int points, nrpoints;

    points = nrpoints = 0;
    for(int i = 1; i < 13; i++)
      cin>>cards[i];
    
    countCards();
    
    //rule 1
    for(int i = 0; i < 4; i++)
      for(int j = 0; j < 4; j++)
        if(figures[i][j] != 0)
          points+=j+1;

    //rule 2-4
    for(int i = 0; i < 4; i++)
      for(int j = 0; j < 3; j++)
        if(figures[i][j] != 0 && total[i] - figures[i][j] < (3 - j))
        {
          points-=figures[i][j];
          //cout<<i<<" "<<j<<endl;
        }
    
    nrpoints = points;

    //rule 5-7
    for(int i = 0; i < 4; i++)
      if(total[i] == 0) points+=2;
      else if(total[i] == 1) points+=2;
      else if(total[i] == 2) points++;

    //stopped suits
    for(int i = 0; i < 4; i++)
      for(int j = 1; j < 4; j++)
      {
        if(j == 3 && figures[i][j] != 0)
          stopped[i] = 1;
        else if(figures[i][j] != 0 && total[i] - figures[i][j] >= (3 - j))
          stopped[i] = 1;               
      }

    if(points < 14)
      cout<<"PASS"<<endl;
    else if(nrpoints >= 16 && allStopped())
      cout<<"BID NO-TRUMP"<<endl;
    else
      {
        int maxi = -1, maxv = -1;
        for(int i = 0; i < 4; i++)
          if(total[i] > maxv)
            maxi = i, maxv = total[i];

        cout<<"BID "<<suits[maxi]<<endl;
      }

    /*for(int i = 0; i < 4; i++)
      cout<<total[i]<<" ";
    
    cout<<endl;

    for(int i = 0; i < 4; i++)
      cout<<stopped[i]<<" ";
    
    cout<<endl;

    for(int i = 0; i < 4; i++)
    {
      for(int j = 0; j < 4; j++)
        cout<<figures[i][j]<<" ";
      cout<<endl;
    }
    
    cout<<"points "<<points<<endl;
    cout<<"stopped "<<allStopped()<<endl;*/
  }

  return 0;
}