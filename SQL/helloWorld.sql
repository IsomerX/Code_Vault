<<<<<<< HEAD
-- Create a new database called 'DatabaseName'
-- Connect to the 'master' database to run this snippet
USE master
GO
-- Create the new database if it does not exist already
IF NOT EXISTS (
    SELECT name
        FROM sys.databases
        WHERE name = N'DatabaseName'
)
CREATE DATABASE DatabaseName
=======
-- Create a new database called 'DatabaseName'
-- Connect to the 'master' database to run this snippet
USE master
GO
-- Create the new database if it does not exist already
IF NOT EXISTS (
    SELECT name
        FROM sys.databases
        WHERE name = N'DatabaseName'
)
CREATE DATABASE DatabaseName
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
GO