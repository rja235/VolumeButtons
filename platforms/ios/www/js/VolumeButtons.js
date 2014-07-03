var VolumeButtons = {

		clickButton: function(success, failure){
				cordova.exec(success, failure, "VolumeButtons", "activateButtons", []);
			}
};

module.exports = VolumeButtons;

