
database storage pattern:

Struct: 
database/
database/size.txt -> the size of total itens
database/index/
database/index/<index>.txt -> keyhash 
database/itens
database/itens/<keyhash>/
database/itens/<keyhash>/data ->the data value  
database/itens/<keyhash>/key_value
database/itens/<keyhash>/key_index.txt -> <index>



database/
database/2
database/index/
database/index/1 -> hash_a
database/itens
database/itens/hash_a/
database/itens/hash_a/data 
database/itens/hash_a/keyvalue
database/itens/hash_a/1


