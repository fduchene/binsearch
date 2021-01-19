// Code from http://www.cprover.org/cprover-manual/cbmc/tutorial/
//
int binsearch(int x)
{
  int a[16];
  signed low = 0, high = 17;

  while(low < high)
  {
    signed middle = low + ((high - low) >> 1);

    if(a[middle] < x)
      high = middle;
    else if(a[middle] > x)
      low = middle + 1;
    else // a[middle]==x
      return middle;
  }

  return -1;
}

int main() {
	int x;
	x = binsearch(18);
	x = binsearch(0);
}
