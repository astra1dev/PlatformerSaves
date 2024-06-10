#include <Geode/Geode.hpp>
#include <geode.custom-keybinds/include/Keybinds.hpp>
#include <sabe.persistencyutils/include/PersistencyUtils.hpp>

using namespace geode::prelude;
using namespace persistencyUtils;

void setupKeybinds();

$on_mod(Loaded) {
	setupKeybinds();
}

void setupKeybinds() {
	using namespace keybinds;

	// TODO REMOVE
	BindManager::get()->registerBindable({
		"test-key-2"_spr,
		"Test 2",
		"Save",
		{ Keybind::create(KEY_K, Modifier::None) },
		Category::PLAY,
	});
	// ENDTODO
}