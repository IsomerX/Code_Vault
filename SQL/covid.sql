LOAD DATA INFILE '/home/dhruv/Desktop/Code_Vault/covid.csv' 
INTO TABLE covid
FIELDS TERMINATED BY ',' 
ENCLOSED BY '"'
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;

select * from covid;