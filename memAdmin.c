#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
char *allocp = allocbuf;

char *alloc(int n) {
  if (allocbuf + ALLOCSIZE - allocp >= n) {
    allocp = allocp + n;
    return allocp - n;
  }

  return 0;
}

void afree(char *p) {
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    allocp = p;
}

int main(void) {

  return 0;
}
