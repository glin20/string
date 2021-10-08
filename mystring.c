int mystrlen(char *s){
  int i = 0;
  while(*s){
    i++;
    s++;
  }
  return i;
}

char *mystrcpy(char *dest, char *source){
  char *destp = dest;
  while(*source){
    *dest = *source;
    dest++;
    source++;
  }
  *dest = '\0';
  return destp;
}

char *mystrncpy(char *dest, char *source, int n){
  char *destp = dest;
  while(n){
    *dest = *source;
    dest++;
    source++;
    n--;
  }
  return destp;
}

char *mystrcat(char *dest, char *source){
  char *destp = dest;
  while(*dest){
    dest++;
  }
  while(*source){
    *dest = *source;
    dest++;
    source++;
  }
  *dest = '\0';
  return destp;
}

char *mystrncat(char *dest, char *source, int n){
  char *destp = dest;
  while(*dest){
    dest++;
  }
  while(n){
    *dest = *source;
    dest++;
    source++;
    n--;
  }
  *dest = '\0';
  return destp;
}

char *mystrchr(char *s, char c){
  while(*s){
    if (*s == c){
      return s;
    }
    s++;
  }
  if (*s == c){
    return s;
  }
}

int mystrcmp(char *s1, char*s2){
  while (*s1 == *s2 && *s1 && *s2){
    s1++;
    s2++;
  }
  return *s1 - *s2;
}
