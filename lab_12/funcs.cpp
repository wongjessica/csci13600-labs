#include "funcs.h"

bool isAlphanumeric(string s) {
	return !s.length() || (isalnum(s[0]) && isAlphanumeric(s.substr(1, s.length()-1)));
}

Profile::Profile(string usrn, string dspn) {
	username = usrn;
	displayname = dspn;
}
Profile::Profile() {
	username = "";
	displayname = "";
}

string Profile::getUsername() {
	return username;
}

string Profile::getFullName() {
	return displayname + " (@" + username + ")";
}

void Profile::setDisplayName(string dspn) {
	displayname = dspn;
}


Network::Network() {
	numUsers = 0;
	numPosts = 0;
	for (int i = 0; i < MAX_USERS; ++i) {
		for (int j = 0; j < MAX_USERS; ++j) {
			following[i][j] = false;
		}
	}
}

int Network::findID(string usrn) {
	for (int i = 0; i < numUsers; ++i) {
		if (profiles[i].getUsername() == usrn) {
			return i;
		}
	}
	return -1;
}

bool Network::addUser(string usrn, string dspn) {
	if (findID(usrn) + 1 || numUsers == MAX_USERS || !isAlphanumeric(usrn)) {
		return false;
	}
	profiles[numUsers++] = Profile(usrn, dspn);
	return true;
}

bool Network::follow(string usrn1, string usrn2) {
	if (!((findID(usrn1) + 1) && (findID(usrn2) + 1))) {
		//cout << findID(usrn1) << findID(usrn2) << endl;
		return false;
	}
	//out << usrn1 << findID(usrn1) << usrn2 << findID(usrn2) << endl;
	following[findID(usrn1)][findID(usrn2)] = true;
	return true;
}

void Network::printDot() {
	cout << "digraph {" << endl;
	for (int i = 0; i < numUsers; ++i) {
		cout << "\t\"@" << profiles[i].getUsername() << "\"" << endl;
	}
	cout << endl;

	for (int i = 0; i < numUsers; ++i) {
		for (int j = 0; j < numUsers; ++j) {
			if (following[i][j]) {
				cout << "\t\"@" << profiles[i].getUsername() << " -> \"@" << profiles[j].getUsername() << "\"" << endl;
			}
		}
	}
	cout << "}" << endl;
}

bool Network::writePost(string usrn, string msg) {
	if (numPosts == MAX_POSTS || findID(usrn) == -1) {
		return false;
	}
	Post post;
	post.username = usrn;
	post.message = msg;
	posts[numPosts++] = post;
	return true;
}

bool Network::printTimeline(string usrn) {
	if (findID(usrn) == -1) {
		return false;
	}
	for (int i = numPosts - 1; i >= 0; --i) {
		if (posts[i].username == usrn || following[findID(usrn)][findID(posts[i].username)]) {
			cout << profiles[findID(posts[i].username)].getFullName() << ": " << posts[i].message << endl;
		}
	}
	return true;
}
