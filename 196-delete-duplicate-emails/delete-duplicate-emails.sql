# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

DELETE P FROM PERSON AS P,PERSON AS S WHERE P.ID>S.ID AND P.EMAIL=S.EMAIL;