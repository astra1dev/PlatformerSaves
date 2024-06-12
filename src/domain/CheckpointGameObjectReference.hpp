#pragma once
#include <sabe.persistencyutils/include/PersistencyUtils.hpp>

class CheckpointGameObjectReference {
public:
	CheckpointGameObject* m_reference;	

	CheckpointGameObjectReference() {
		m_reference = nullptr;
	};
	CheckpointGameObjectReference(CheckpointGameObject* i_reference) {
		m_reference = i_reference;
	}

	void load(persistencyUtils::InputStream& i_stream);
	void save(persistencyUtils::OutputStream& o_stream);
};