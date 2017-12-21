var Observable = require("FuseJS/Observable");

function TaskItem(text, timeSlot, i, image){
	this.text = Observable(text);
	this.timeSlot = Observable(timeSlot);
	this.delay = Observable(i * 0.05);
	this.image = image;
}

var items = Observable(
	new TaskItem("New subpage for Janet", "8 - 10am", 1, "Assets/avatar1.png"),
	new TaskItem("Catch up with Tom", "11 - 12am Hangouts", 2, "Assets/avatar2.png"),
	new TaskItem("Lunch with Diane", "12am Restaurant", 3, "Assets/avatar3.png")
);

function loginPressed(){

	router.goto("MainView");

}

var leftPanelOpen = Observable(false);
var leftPanelWide = Observable(false);

function toggleLeftPanelOpen(){
	if (leftPanelOpen.value) {
		leftPanelOpen.value = false;
	}
	else{
		leftPanelOpen.value = true;
	}
}

function setLeftPanelOpenTrue(){
	if(!leftPanelOpen.value){
		leftPanelOpen.value = true;
	}
}

var rightPanelOpen = Observable(false);
var rightPanelWide = Observable(false);

function toggleRightPanelOpen(){
	if (rightPanelOpen.value) {
		rightPanelOpen.value = false;
	}
	else{
		rightPanelOpen.value = true;
	}
}

function setRightPanelOpenTrue(){
	if(!rightPanelOpen.value){
		rightPanelOpen.value = true;
	}
}


module.exports = {
	items: items,
	loginPressed: loginPressed,
	leftPanelOpen: leftPanelOpen,
	toggleLeftPanelOpen: toggleLeftPanelOpen,
	setLeftPanelOpenTrue: setLeftPanelOpenTrue,
	rightPanelOpen: rightPanelOpen,
	toggleRightPanelOpen: toggleRightPanelOpen,
	setRightPanelOpenTrue: setRightPanelOpenTrue
};
