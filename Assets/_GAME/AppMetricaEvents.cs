using System.Collections.Generic;
using _GAME.Scripts.Collector;
using UnityEngine;

namespace _GAME
{
    public class AppMetricaEvents : MonoBehaviour
    {
        private static bool _isInitialized = false;

        private void Awake()
        {
            if (!_isInitialized)
            {
                _isInitialized = true;
                DontDestroyOnLoad(this.gameObject);
            }
            else
            {
                Destroy(this.gameObject);
            }
        }
        public static void SendLevelStart(int levelNumber, string levelName, int countLivedSessions)
        {
            var parameters = new Dictionary<string, object>()
            {
                {"level_number", levelNumber},
                {"level_name", levelName},
                {"level_count", countLivedSessions}
            };

            AppMetrica.Instance.ReportEvent("level_start", parameters);

            AppMetrica.Instance.SendEventsBuffer();
        }

        public static void TaskDone(int taskNumber, int level, TaskHolder taskHolder)
        {
            var parameters = new Dictionary<string, object>()
            {
                {"level_number", level},
                {"task_number", taskNumber},
                {"task_holder", taskHolder.ToString()}
            };
            AppMetrica.Instance.ReportEvent("task_done", parameters);

            AppMetrica.Instance.SendEventsBuffer();
        }

        public static void SendLevelEnd(int levelNumber, string levelName, int countLivedSessions, bool isWin)
        {
            var result = isWin ? "win" : "lose";

            var parameters = new Dictionary<string, object>()
            {
                {"level_number", levelNumber},
                {"level_name", levelName},
                {"level_count", countLivedSessions},
                {"result", result}
            };

            AppMetrica.Instance.ReportEvent("level_finish", parameters);

            AppMetrica.Instance.SendEventsBuffer();
        }

        public static void VideoAdAvailable(bool inReward, string placementName, bool available, bool conectionStatus)
        {
            var result = available ? "success" : "not_available";
            var ad_type = inReward ? "rewarded" : "interstitial";

            var parameters = new Dictionary<string, object>()
            {
                {"ad_type", ad_type},
                {"placement", placementName},
                {"result", result},
                {"connection", conectionStatus}
            };

            //  AppMetrica.Instance.ReportEvent("video_ads_available", parameters);
            //  AppMetrica.Instance.SendEventsBuffer();


        }

        public static void VideoAdStarted(bool inReward, string placementName, bool available, bool conectionStatus)
        {
            var result = available ? "start" : "canceled";
            var ad_type = inReward ? "rewarded" : "interstitial";

            var parameters = new Dictionary<string, object>()
            {
                {"ad_type", ad_type},
                {"placement", placementName},
                {"result", result},
                {"connection", conectionStatus}
            };

            //  AppMetrica.Instance.ReportEvent("video_ads_started", parameters);
            //  AppMetrica.Instance.SendEventsBuffer();

        }

        public static void VideoAdWatched(bool inReward, string placementName, bool available, bool conectionStatus)
        {
            var result = available ? "watched" : "canceled";
            var ad_type = inReward ? "rewarded" : "interstitial";

            var parameters = new Dictionary<string, object>()
            {
                {"ad_type", ad_type},
                {"placement", placementName},
                {"result", result},
                {"connection", conectionStatus}
            };

            //  AppMetrica.Instance.ReportEvent("video_ads_watch", parameters);
//AppMetrica.Instance.SendEventsBuffer();

        }

    }
}
