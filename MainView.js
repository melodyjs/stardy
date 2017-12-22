var Observable = require('FuseJS/Observable');

function Page(name, image, todo, loc, tag, no, stars, people){
	this.name = name;
	this.image = image;
	this.todo = "EAST LNG " + todo;
	this.loc = loc;
	this.tag = tag;
	this.no = "NO. " + no;
	this.stars = stars;
	this.starsRest = 5 - stars;
	this.people = people;
	this.swiped = false;
	this.opened = false;
}

var pages = Observable();

pages.add(new Page("TEPS Listening", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/im.jpg", 56, "강남역", "#TEPS #LC #Voca", 10238, 3, ["/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-001.jpg", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-002.jpg", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-003.jpg"]));
pages.add(new Page("SNU LAWSCHOOL", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/snu.jpg", 64, "서울대입구", "#서울대 #로스쿨", 10239, 4, ["/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-004.jpg", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-005.jpg", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-006.jpg"]));
pages.add(new Page("임용고시", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/TEPS.png", 60, "서울대입구", "#서울대 #임용고시 #2차", 10241, 4, ["/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-007.jpg", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-008.jpg", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Faces/model-009.jpg"]));
pages.add(new Page("TAIWAN", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Taiwan.png", 23, 120, "Dusk over the fields of Taiwan.", 10241, 3, ["Assets/Faces/model-010.jpg", "Assets/Faces/model-005.jpg", "Assets/Faces/model-003.jpg", "Assets/Faces/model-006.jpg"]));
pages.add(new Page("THAILAND", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Thailand.png", 15, 102, "A white silky beach in Thailand.", 10241, 4, ["Assets/Faces/model-004.jpg", "Assets/Faces/model-001.jpg"]));
pages.add(new Page("TURKEY", "/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Turkey.png", 40, 34, "Turkish house with a mountain view.", 10241, 3, ["Assets/Faces/model-007.jpg", "Assets/Faces/model-005.jpg", "Assets/Faces/model-004.jpg", "Assets/Faces/model-003.jpg"]));


var pagesView = pages.map(function(item, index){
	return {
		item: item,
		index: index
	};
});

var cardOpen = Observable(false);

function changeCardOpen() {

	if (cardOpen.value) {
		cardOpen.value = false;
	}
	else{
		cardOpen.value = true;
	}
};

var cardSwiped = Observable(false);

var currentCard = Observable(0);

function setCardSwiped() {
	cardSwiped.value = true;
};

function setCardNotSwiped() {
	cardSwiped.value = false;
};


function cardMoveRight(){

	currentCard = currentCard + 1;
	console.log(currentCard);
};

function cardMoveLeft(){

	currentCard = currentCard - 1;
	console.log(currentCard);
};

function timelineClicked(){

	router.goto("TimeLine");

};

function addClicked(){
	router.goto("AddGroup");
};

function isCurrent(index){

	return (currentCard.value == index);

};


var searchOpen = Observable(false);

function toggleSearchOpen(){
	if (searchOpen.value) {
		searchOpen.value = false;
	}
	else{
		searchOpen.value = true;
	}
}

function Message(icon, sender, time, content) {
	this.icon = icon;
	this.sender = sender;
	this.time = time;
	this.content = content;
	this.isMe = false;
}

var sendText = Observable();

var messages = Observable(
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact2.jpg", "Santa", "11/29 PM 6:23", "How are you?"),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact3.jpeg", "Gina", "11/29 PM 6:23", "Great"),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact4.jpg", "John", "11/29 PM 6:23", "Anyone who forgot there is meeting?"),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact1.jpg", "Sara", "11/29 PM 6:24", "I think Kim is."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact2.jpg", "Santa", "11/29 PM 6:24", "lol!"),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact3.jpeg", "Gina", "11/29 PM 6:25", "Sorry, just kidding."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact4.jpg", "John", "11/29 PM 6:40", "I just got shot up bad at the Wounded Knee. I took a bullet to the knee."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact1.jpg", "Sara", "11/29 PM 6:41", "I'm telling you, there were penguins everywhere. As far as the eye could see."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact2.jpg", "Santa", "11/29 PM 6:41", "I heard you went to school without doing your homework."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact3.jpeg", "Gina", "11/29 PM 6:43", "Sorry, babes, I am running a little late tonight, can you just start without me?"),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact4.jpg", "John", "11/29 PM 6:44", "I just got shot up bad at the Wounded Knee. I took a bullet to the knee."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact1.jpg", "Steve", "11/29 PM 6:44", "I'm telling you, there were penguins everywhere. As far as the eye could see."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact2.jpg", "Santa", "11/29 PM 6:51", "I heard you went to school without doing your homework."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact3.jpeg", "Gina", "11/29 PM 6:51", "Sorry, babes, I am running a little late tonight, can you just start without me?"),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact4.jpg", "John", "11/29 PM 6:52", "I just got shot up bad at the Wounded Knee. I took a bullet to the knee."),
	new Message("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/Assets/Contacts/Contact1.jpg", "Sara", "11/29 PM 6:52", "I'm telling you, there were penguins everywhere. As far as the eye could see.")
);

function removeItem(sender) {
	messages.remove(sender.data);
}

function postponeItem(sender) {
	messages.remove(sender.data);
	messages.add(sender.data);
}

function sendItem(sender) {
	var text = sendText.value;
	sendText.value = "";
	var newMessage = new Message("","Me","11/29 PM 6:53", text);
	newMessage.isMe = true;
	messages.add(newMessage);
}


module.exports = {
	pagesView : pagesView,
	timelineClicked : timelineClicked,
	cardOpen : cardOpen,
	cardSwiped : cardSwiped,
	setCardSwiped : setCardSwiped,
	setCardNotSwiped : setCardNotSwiped,
	changeCardOpen : changeCardOpen,
	cardMoveLeft : cardMoveLeft,
	cardMoveRight : cardMoveRight,
	isCurrent : isCurrent,
	searchOpen : searchOpen,
	toggleSearchOpen : toggleSearchOpen,
	messages: messages,
	removeItem: removeItem,
	postponeItem: postponeItem,
	sendItem: sendItem,
	sendText: sendText
};
