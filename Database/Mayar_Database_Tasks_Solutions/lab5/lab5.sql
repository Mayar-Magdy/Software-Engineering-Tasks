--1- Display all data for all the countries.
SELECT * FROM Country;
--2- Display all the languages you have. (Remove redundant data)
SELECT DISTINCT language FROM CountryLanguage;
--3- Display all countries that lie in Africa sorted Area.
SELECT * FROM Country WHERE Continent = 'Africa' ORDER BY SurfaceArea DESC;
--4- Display all cities that have population more than 2 million.
SELECT * FROM City WHERE Population > 2000000;
--5- Display all countries that became independent from 1920 t0 1990
SELECT * FROM Country WHERE IndepYear BETWEEN 1920 AND 1990;
--6- Display all countries that have no independence year.
SELECT * FROM Country WHERE IndepYear IS NULL;
--7- Display all countries that have any kind of ‘Republic’ government form.
SELECT * FROM Country WHERE GovernmentForm LIKE '%Republic%';
--8- Display all countries that lie in Asia and have population more than 100 million.
SELECT * FROM Country WHERE Continent = 'Asia' AND Population > 100000000;
--9- Display country code for all those speak Spanish as an official language.
SELECT CountryCode FROM CountryLanguage WHERE Language = 'Spanish' AND IsOfficial = '1';
--10- Display country code for all those speak more than 2 languages.
SELECT CountryCode FROM CountryLanguage GROUP BY CountryCode HAVING COUNT(Language) > 2;
--11- Display the number of people on earth.
SELECT SUM(CAST(Population as bigint)) AS WorldPopulation FROM Country;
--12- Display all Continents along with the number of countries and total population in each continent.
SELECT Continent, COUNT(Name) AS CountryCount, SUM(CAST(Population as bigint)) AS ContinentPopulation FROM Country GROUP BY Continent;
--13- You have just discovered a new country, Add it to your database. (Of course, your country have some cities and languages)
INSERT INTO Country (Code, Name, Continent, Region, SurfaceArea, IndepYear, Population, LifeExpectancy, GNP, LocalName, GovernmentForm, HeadOfState, Capital, Code2) VALUES
('joG', 'Mayarland', 'Europe', 'Western Europe', 10000, NULL, 5000000, 80, NULL, 'Mayarland', 'Monarchy', NULL, NULL, 'BG');

--select * from city
--max id 4079
INSERT INTO City (ID, Name, CountryCode, District, Population) VALUES
(4080, 'Mayarxcity', 'joG', 'Mayarxcity', 1);
(4081, 'Mayar-y-city', 'joG', 'Mayar-y-city', 5000),
(4082, 'Mayar-z-city', 'joG', 'Mayar-z-city', 30000);
INSERT INTO CountryLanguage VALUES
('joG', 'English', 1, 80.2),
('joG', 'German', 0, 5.4),
('joG', 'French', 0, 10.3);
--14- In your country, increase life expectation by 5 years.
UPDATE Country SET LifeExpectancy = LifeExpectancy + 5 WHERE Code = 'joG';

--15- Try to delete your country, what happens?
DELETE FROM Country WHERE Code = 'joG';
--Eroooorr because there are related records in the City and CountryLanguage tables that reference your country code.
--to solve it two we have solutions 
DELETE FROM City WHERE CountryCode = 'joG';
DELETE FROM CountryLanguage WHERE CountryCode = 'joG';
--two is ON DELETE CASCADE option when creating the foreign key constraints

