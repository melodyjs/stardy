var Observable = require('FuseJS/Observable');

function backClicked(){

	router.goBack();

};

function newPost() {
	router.goto("AddPost");
}

function search() {

}

module.exports = {
	backClicked : backClicked,
	newPost: newPost
};
