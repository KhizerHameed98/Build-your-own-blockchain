from block import Block

blockChain = []

genesisBlock = Block("Chancelor on the brink....!",["Satoshi sent 100btc to maria",

"maria sent 20btc to john", "john sent 10btc to jack" ] )
blockChain.append(genesisBlock)

print(blockChain[0].transaction)