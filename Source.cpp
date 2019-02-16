#include<Windows.h>
#include<iostream>
#include<string>

using namespace std;

string currentSentence;
char alphabets[] = { a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y ,z };
char Alphabets[] = { A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y ,Z };

void findPressedKeys()
{
	DWORD KeyCode = 0x41;
	for (int i = 0; i < 26; i++)
	{
		if (GetAsyncKeyState(KeyCode) & 1)
		{
			if (GetAsyncKeyState(VK_SHIFT))
			{
				currentSentence += Alphabets[i];
			}
			else
			{
				currentSentence += alphabets[i];
			}

			if (GetAsyncKeyState(VK_SPACE) & 1)
			{
				currentSentence += " ";
			}
			if (GetAsyncKeyState(VK_BACK) & 1)
			{
				currentSentence = currentSentence.substr(0, currentSentence.size() - 1);
			}

			KeyCode += 1;

			if (GetAsyncKeyState(VK_RETURN) & 1)
			{
				cout << currentSentence << endl;
				currentSentence = " ";
				return;
			}
		}
		int main()
		{
			while (1)
			{
				Sleep(1);

				findPressedKey();
			}
		}
	}
}