    #include<iostream>
    #include<vector>
    using namespace std;
   
    void print_array(char *arr[],int8_t cnt)
    {
            std::vector<std::string> temp;

        int8_t i;
        int count=sizeof(arr)/sizeof(arr[0]);
        cout<<count<<endl;
        printf("Number of elements is: %d\n",cnt);
        for (i=0;i<cnt;i++)
        {   temp.push_back(arr[i]);
            cout<<"Elements of array:"<<temp[i]<<"\n";
        }
    }


int main(){
char *sports[] = {
"golf",
"hockey",
"football",
"cricket",
"shooting"
"jha",
"jhads"
};
int count=sizeof(sports)/sizeof(sports[0]);
print_array(sports,count);

    
}