int canConstruct(char * ransomNote, char * magazine){
    int hashtable[26] = {0};
    int sizeOfMagazine = strlen(magazine);
    int sizeOfRansom = strlen(ransomNote);
    int i;
    for(i = 0; i < sizeOfMagazine; i++) {
        int currLetter = magazine[i] - 97;
        hashtable[currLetter]++;
    }
    for(i = 0; i < sizeOfRansom; i++) {
        int currLetter = ransomNote[i] - 97;
        hashtable[currLetter]--;
        if(hashtable[currLetter] == -1) return 0;
    }
    return 1;
}