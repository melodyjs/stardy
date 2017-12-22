var Observable = require("FuseJS/Observable");

var post = this.Parameter;

// var image_address = group.map(function(x) { return x.image_address;})
// var image = group.map()
var title = group.map(function(x) {return x.title; });
var content = group.map(function(x) {return x.post_content;});

/* Create blank page*/
function addGroup(){
pages.add(new Page(name, "Assets/noimage.png", location, tag, null, 3, null));
	router.goto("MainView");
};

/* Update blank page*/
function addClicked(){
	router.goBack();
};

function cancelClicked(){
	router.goBack();
};

module.exports = {
	image_address: image_address,
	title: title,
	content: content,
	addGroup: addGroup,
	addClicked: addClicked,
	cancelClicked: cancelClicked
};
