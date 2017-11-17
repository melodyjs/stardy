var Observable = require('FuseJS/Observable');

function Page(name, image, long, lat, location, no, stars, people){
	this.name = name;
	this.image = image;
	this.long = "EAST LNG " + long;
	this.lat = "NORTH LAT " + lat;
	this.location = location;
	this.no = "NO. " + no;
	this.stars = stars;
	this.starsRest = 5 - stars;
	this.people = people;
}

var pages = Observable();

pages.add(new Page("CANADA", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Canada.png", 56, -108, "A silver lake in the north of Canada.", 10238, 3, ["Assets/Faces/model-001.jpg", "Assets/Faces/model-002.jpg", "Assets/Faces/model-003.jpg"]));
pages.add(new Page("ICELAND", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Iceland.png", 64, -18, "The rocky landscape of Iceland.", 10239, 4, ["Assets/Faces/model-004.jpg", "Assets/Faces/model-005.jpg", "Assets/Faces/model-006.jpg"]));
pages.add(new Page("NORWAY", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Norway.png", 60, 6, "Green mountain forest in Norway.", 10241, 4, ["Assets/Faces/model-007.jpg", "Assets/Faces/model-008.jpg", "Assets/Faces/model-009.jpg"]));
pages.add(new Page("TAIWAN", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Taiwan.png", 23, 120, "Dusk over the fields of Taiwan.", 10241, 3, ["Assets/Faces/model-010.jpg", "Assets/Faces/model-005.jpg", "Assets/Faces/model-003.jpg", "Assets/Faces/model-006.jpg"]));
pages.add(new Page("THAILAND", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Thailand.png", 15, 102, "A white silky beach in Thailand.", 10241, 4, ["Assets/Faces/model-004.jpg", "Assets/Faces/model-001.jpg"]));
pages.add(new Page("TURKEY", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Turkey.png", 40, 34, "Turkish house with a mountain view.", 10241, 3, ["Assets/Faces/model-007.jpg", "Assets/Faces/model-005.jpg", "Assets/Faces/model-004.jpg", "Assets/Faces/model-003.jpg"]));


var pagesView = pages.map(function(item, index){
	return {
		item: item,
		index: index
	};
});

function timelineClicked(){

	router.goto("TimeLine");

}

module.exports = {
	pagesView: pagesView,
	timelineClicked: timelineClicked
};
