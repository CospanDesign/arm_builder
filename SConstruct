import os
import utils

debug = False


AddOption("--build_debug",
          dest='build_debug',
          action="store_true",
          help='view messages for debugging the build',
          default=False)
AddOption("--clean_build",
          dest="clean_build",
          action="store_true",
          help="Clean the build environment",
          default=False)
AddOption("--config_file",
          type="string",
          dest='config_file',
          action="store",
          help="specify a config file",
          default='config.json')

#Create an environment
env = Environment()
print "Gt environment"


#parse options from the command line
debug = GetOption('build_debug')
clean_build = GetOption('clean_build')

env['CONFIG_FILE'] = GetOption('config_file')

utils.initialize_environment(env)

if debug == True:
  d = env.Dictionary()
  keys = d.keys()
  keys.sort()
  for key in keys:
    print "\t%s: %s" % (key, str(d[key]))
