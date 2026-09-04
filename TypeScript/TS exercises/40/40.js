// Album: Write a function called make_album() that builds a Object describing a music album. The function should take in an artist name and an album title, and it should return a Object containing these two pieces of information. Use the function to make three dictionaries representing different albums. Print each return value to show that Objects are storing the album information correctly. Add an optional parameter to make_album() that allows you to store the number of tracks on an album. If the calling line includes a value for the number of tracks, add that value to the album’s Object. Make at least one new function call that includes the number of tracks on an album.
var make_album = function (artist, title, tracks) {
    var album = {
        "Artist name": artist,
        "Album title": title
    };
    if (tracks) {
        album["Number of tracks"] = tracks;
    }
    console.log(album);
};
make_album("Michael Jackson", "Thriller");
make_album("AC/DC", "Back in Black");
make_album("Pink Floyd", "The Dark Side of the Moon", 10);
