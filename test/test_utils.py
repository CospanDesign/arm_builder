#! /usr/bin/python
import unittest
import os
import sys
import string

sys.path.append(os.path.join(os.path.dirname(__file__),
                             os.pardir,
                             "site_scons"))

import utils
import os


class env_dict(dict):

    """Mock class to fool the initialize environment"""

    def AppendENVPath(self, path_name, path):
        if path_name not in self.keys():
            self[path_name] = ""
        self[path_name] = string.join([self[path_name], path], sep = ":")


class Test (unittest.TestCase):

    def setUp(self):
        self.dbg = False
        self.env = {}
        self.env["CONFIG_FILE"] = "config.json"
        self.env["ENV"] = {}

    def test_read_config(self):
        cfg = utils.read_config(self.env)
        #print "Config dict: %s" % str(cfg)

    def test_create_build_directory(self):
        cfg = utils.read_config(self.env)
        build_dir = "temp"
        cfg["build_dir"] = build_dir
        utils.create_build_directory(cfg)
        build_dir = os.path.join(utils.get_project_base(), build_dir)
        self.assertTrue(os.path.exists(build_dir))
        os.rmdir(build_dir)

    def test_initialize_environment(self):
        utils.initialize_environment(self.env)



if __name__ == "__main__":
  unittest.main()
