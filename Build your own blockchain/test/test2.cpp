#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

class Block 
{
    public:
    int transactionCount;
    size_t blockHash;
    size_t previousHash;
    std::vector<std::string> transactions;


    Block(size_t _previousHash, char * _transactions[], int _count){
        transactionCount = _count;
        previousHash = _previousHash;
       
        int count= _count;
//        cout<<count<<endl;

        for(int i = 0; i<count ;i++)
        {
            transactions.push_back(_transactions[i]);
        }

        hash<string>hash1;
        hash<size_t>finalHash;
        string toHash;

        for(int i=0  ;i<count;i++){
            toHash = toHash + _transactions[i];
        }
        
        blockHash= finalHash(hash1(toHash) + _previousHash);
    }
    void printBlockDetails(){
        cout<<"Transactions: ";
    for(int i=0;i<transactionCount;i++)
    {
        cout<<"\n"<<transactions[i]<<"\n";
    }
    printBlockHash();
    printPreviousHash();
}
void printBlockHash(){
    cout<<"\nBlockHash: "<<blockHash<<"\n";
}
void printPreviousHash(){
    cout<<"\nPrevious Transation"<<previousHash<<"\n";
}
};


int main(){
    
char *sports[] = {
   "golf",
   "hockey",
   "football",
   "cricket",
   "shooting"
};
char *sports2[] = {
   "golv",
   "hockey",
   "football",
   "cricket",
   "shooting"
};

int count = sizeof(sports)/sizeof(sports[0]);

    Block genesisBlock =  Block(0,sports,count);
    genesisBlock.printBlockDetails();

    
   
    
   
    // Block block2 = Block(genesisBlock.blockHash,"khizer send 1000btc  to himself");
    // std::vector<Block> blockchain;
    // blockchain.push_back(genesisBlock);
    // cout<<blockchain[0].blockHash<<"\n\n";
    // blockchain.push_back(block2);
    // cout<<blockchain[1].blockHash<<"\n\n";

    count = sizeof(sports2)/sizeof(sports2[0]);
    Block  block2 = Block(genesisBlock.blockHash,sports2,count);
    block2.printBlockDetails();
    // for(int i = 0; i < count; i++){
    // cout<<"Transaction: "<<block2.transactions[i]<<endl;
    // }
    
    // cout <<"\n"<<"BlockHash: "<<block2.blockHash<<"\n"<<"Previous Hash: "
    // <<block2.previousHash<<"\n\n";
}