var Observable = require("FuseJS/Observable");

var group = this.Parameter;

var name = group.map(function(x) {return x.name; });
var tag = group.map(function(x) {return x.tag; });
var location = group.map(function(x) {return x.location; });

/* Create blank page*/
function addGroup(){
	pages.add(new Page(name, "Assets/noimage.png", location, tag, null, 3, null));
	router.goto("MainView");
};

//name, image, loc, tag, no, stars, people

/* Update blank page*/
function addClicked(){
	router.goBack();
};

function cancelClicked(){
	router.goBack();
};

module.exports = {
	name: name,
	tag: tag,
	location: location,

	addGroup: addGroup,
	addClicked: addClicked,
	cancelClicked: cancelClicked
};
