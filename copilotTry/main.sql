-- You are given a table, Projects, containing three columns: Task_ID, Start_Date and End_Date. It is guaranteed that the difference between the End_Date and the Start_Date is equal to 1 day for each row in the table. Write a query to output the start and end dates of projects listed by the number of days it took to complete the project in ascending order. If there is more than one project that have the same number of completion days, then order by the start date of the project.

-- Example:
--
-- Input:
-- 	(1, "2016-12-01", "2016-12-31")
-- 	(2, "2016-12-01", "2016-12-31")
-- 	(3, "2017-01-01", "2017-01-31")
-- 	(4, "2017-01-01", "2017-01-31")
-- 	(5, "2017-02-01", "2017-02-28")
--
-- Output:
-- 	(1, "2016-12-01", "2016-12-31")
-- 	(3, "2017-01-01", "2017-01-31")
-- 	(4, "2017-01-01", "2017-01-31")
-- 	(2, "2016-12-01", "2016-12-31")
-- 	(5, "2017-02-01", "2017-02-28")

-- Initial solution( complexity: time=>O() space=>O())

SELECT Project_ID, Start_Date, End_Date FROM Projects 
WHERE (End_Date - Start_Date) = 1 ORDER BY Start_Date ASC;