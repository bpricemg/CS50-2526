-- List of movies that Emma Watson has stared in
SELECT title FROM movies
JOIN stars
ON movies.id = stars.movie_id
JOIN people
ON people.id = stars.person_id
WHERE people.name = 'Emma Watson';
