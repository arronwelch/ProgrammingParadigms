#include <iostream>
#include <cstring>
using namespace std;

void *lsearch(void *key, void *base, int n, int elemSize, int (*cmpfn)(void*,void*))
{
  for(int i=0;i<n;i++)
  {
    void *elemAddr = (char*)base + i*elemSize;
    if((*cmpfn)(key,elemAddr)==0)
      return elemAddr;
  }
  return NULL;
}

int IntCmp(void *elem1,void *elem2)
{
  int *ip1 = (int*)elem1;
  int *ip2 = (int*)elem2;

  return *ip1-*ip2;
}

int StrCmp(void *elem1,void *elem2)
{
  char *sp1 = *(char**)elem1;
  char *sp2 = *(char**)elem2;
  return strcmp(sp1,sp2);
}

int main() {
  int array[] = {4,2,3,7,11,6};
  int size = 6;
  int number = 7;
  int *found = (int*)lsearch(&number,array,6,sizeof(int),IntCmp);
  if(found == NULL)
    cout << "Not found" << endl;
  else
    cout << "found " << *found << endl;

  char *notes[] = {"Ab","F#","B","Gb","Eb","D"};//global constant
  char *favorateNote = "Eb";
  char **foundn = (char **)lsearch(&favorateNote,notes,
                                  sizeof(notes)/sizeof(notes[0]),
                                  sizeof(char*),&StrCmp);  
  cout << "found favorateNote " << *foundn << endl;
}
