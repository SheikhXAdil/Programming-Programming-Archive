-- @block
SELECT *
FROM person;
-- @block
SELECT *
FROM person
ORDER BY id DESC
LIMIT 100;
-- @block
SELECT DISTINCT country
FROM person
ORDER BY country DESC;
-- @block
SELECT *
FROM person
WHERE gender = 'Female';
-- @block
SELECT *
FROM person
WHERE gender = 'Female'
    AND (
        country = 'Poland'
        OR country = 'Egypt'
    );
-- @block
SELECT 1 > 0;
-- @block
SELECT *
FROM person
LIMIT 5 OFFSET 5;
-- @block
SELECT *
FROM person OFFSET 5
FETCH FIRST 3 ROW ONLY;
-- @block
SELECT *
FROM person
WHERE country IN ('China', 'France', 'Egypt');
-- @block
SELECT *
FROM person
WHERE date_of_birth BETWEEN '2022-01-23' AND '2022-08-02';
-- @block
SELECT *
FROM person
WHERE email LIKE '%.com';
-- @block
SELECT *
FROM person
WHERE email LIKE '______@%';
-- @block
SELECT country
FROM person
WHERE country LIKE 'P%';
-- @block
SELECT first_name
FROM person
WHERE first_name ILIKE 'c%';
-- @block
SELECT id
FROM person
LIMIT 10;
-- @block