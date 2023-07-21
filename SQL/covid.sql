<<<<<<< HEAD
LOAD DATA INFILE '/home/dhruv/Desktop/Code_Vault/covid.csv' 
INTO TABLE covid
FIELDS TERMINATED BY ',' 
ENCLOSED BY '"'
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;

=======
LOAD DATA INFILE '/home/dhruv/Desktop/Code_Vault/covid.csv' 
INTO TABLE covid
FIELDS TERMINATED BY ',' 
ENCLOSED BY '"'
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
select * from covid;